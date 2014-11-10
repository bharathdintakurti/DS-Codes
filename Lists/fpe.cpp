#include<iostream>

using namespace std;


class infix
{
	private :
		char target[50], stk[50] ;
		char *s, *t ;
		int top ;
	public :
		infix( ) ;
		void setexpr ( char *str ) ;
		void push ( char c ) ;
		char pop( ) ;
		void convert( ) ;
		int priority ( char c ) ;
		void show( ) ;
} ;
infix :: infix( )
{
	top = -1 ;
	t = target ;

}
void infix :: setexpr ( char *str )
{
	s = str ;
}
void infix :: push ( char c )
{
	if ( top == 50 );

	else
	{
		top++ ;
		stk[top] = c ;
	}
}
char infix :: pop( )
{
	if ( top == -1 )
	{

		return -1 ;
	}
	else
	{
		char item = stk[top] ;
		top-- ;
		return item ;
	}
}
void infix :: convert( )
{
	while ( *s )
	{

		if ( isdigit ( *s ) || isalpha ( *s ) )
		{
			while ( isdigit ( *s ) || isalpha ( *s ) )
			{
				*t = *s ;
				s++ ;
				t++ ;
			}
		}
		if ( *s == '(' )
		{
			push ( *s ) ;
			s++ ;
		}
		char opr ;
		if ( *s == '*' || *s == '+' || *s == '/' || *s == '%' || *s == '-' || *s == '$' )
		{
			if ( top != -1 )
			{
				opr = pop( ) ;
				while ( priority ( opr ) >= priority ( *s ) )
				{
					*t = opr ;
					t++ ;
					opr = pop( ) ;
				}
				push ( opr ) ;
				push ( *s ) ;
			}

			s++ ;
		}
		if ( *s == ')' )
		{
			opr = pop( ) ;
			while ( ( opr ) != '(' )
			{
				*t = opr ;
				t++ ;
				opr =  pop( ) ;
			}
			s++ ;
		}
	}
	while ( top != -1 )
	{
		char opr = pop( ) ;
		*t = opr ;
		t++ ;
	}
	*t = '\0' ;
}
int infix :: priority ( char c )
{

	if ( c == '*' || c == '/' || c == '%' )
		return 2 ;
	else
	{
		if ( c == '+' || c == '-' )
			return 1 ;
		else
			return 0 ;
	}
}
void infix :: show( )
{
	cout << target ;
}
int main( )
{
	char expr[50] ;
	infix q ;

	cout << "\nEnter an expression in infix form: " ;
	cin >> expr ;

	q.setexpr (expr) ;
	q.convert( ) ;

	cout << "\nThe postfix expression is: " ;
	q.show( ) ;

	cout << endl;

return 0;
}
