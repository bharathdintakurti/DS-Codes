#include<at89x52.h>
#include<math.h>
#include<stdio.h>
#define lcd_data P2

 sbit d7=P2^7;
 sbit rs=P1^0;
 sbit rw=P1^1;
 sbit en=P1^2;
 void lcd_busy()
 {
 	d7=1;
	en=1;
	rs=0;
	rw=1;
	while(d7)
	{
		en=0;
		en=1;
	}

 }
 void lcd_init()
 {
 	lcd_data=0x38;
	rs=0;
	rw=0;
	en=1;
	en=0;
	lcd_busy();
	lcd_data=0x0F;
	rs=0;
	rw=0;
	en=1;
	en=0;
	lcd_busy();
	lcd_data=0x06;
	rs=0;
	rw=0;
	en=1;
	en=0;
	lcd_busy();

 }
void lcd_senddata(unsigned char var)
{
	lcd_data=var;
	rs=1;
	rw=0;
	en=1;
	en=0;
	lcd_busy();

}
void lcd_sendstring(unsigned char *var)
{
	while(*var)
	{
		lcd_senddata(*var++);
	}
}
void lcd_command(unsigned char var)
{
	lcd_data=var;
	rs=0;
	rw=0;
	en=1;
	en=0;
	lcd_busy();
}
int lcd_printing(void)
{
	int l=0;
	int k;
	lcd_sendstring("FREQUENCY METER");

	for(l=0;l<16;l++)
	{
		lcd_command(0x1C);
		for(k=0;k<4000;k++);
	}
	lcd_command(0x01);
}
float freq;
int q=0;
setup_interrupts()
{
	EA=1;
	EX0=1;
	IT0=1;

}
timer_exec() interrupt 0
{
	char buffer[10];
	if(q==0)
	{
		TR0=1;
		q=1;
		return;
	}
	d7=0;
	TR0=0;
	freq=TH0*256+TL0;
	freq=33333*5/freq;
	lcd_command(0x01);
	lcd_sendstring("Frequency=");
	lcd_command(0xC0);
	sprintf(buffer,"%f",freq);
	lcd_sendstring(buffer);
	lcd_sendstring("Hz");
	EA=0;

}
int main()
{
	TMOD=0x09;
	TH0=0;
	TL0=0;
	setup_interrupts();
	lcd_init();
	lcd_printing();
	while(1)
	{

	}
}

