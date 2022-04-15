#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include<ctype.h>
int power (int op1 , int op2)
{
	int res=1;
	for (int i=1; i<op2; i++)
	{
	 res = res*(op1*op1);
	}
	return res;
}
void push ( int ele , int *top , int stack[])
{
	stack[++(*top)] = ele;
}
int pop ( int *top, int stack[])
{
	return stack[(*top)--];
}
int compute ( char s , int op1 , int op2 )
{
	switch(s)
	{
		case '+' : return op1+op2;
		
		case '-' : return op1-op2;
		
		case '*' : return op1*op2;
		
		case '/' : return op1/op2;
		
		case '%' : return op1%op2;
		
		case '^' : return power(op1,op2);
	}

}
int post_val( char post[])
{
	int stack[10], i=0 , top=-1, token;
	char symbol;
	while (post[i] != '\0')
	{
		symbol = post[i];
		if ( isdigit(symbol)){
			token = symbol - '0';
			push(token , &top , stack);
		}
		else {
			int op2= pop(&top , stack);
			int op1 = pop(&top , stack);
			int res = compute (symbol , op1 , op2 );
			push (res , &top , stack);
		}
		i++;
	}
	return pop(&top , stack);
}
int main (){
	char post[30];
	printf("Enter a valid postfix expression : \n  ");
	fgets(post , 30 , stdin );
	printf ("The result of the expression is %d \n", post_val(post));
	return 0;
}