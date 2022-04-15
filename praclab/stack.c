#include<stdlib.h>
#define MAX 50
#include<stdio.h>
void push(int ele , int *top , int stack[]){
	stack[++(*top)] = ele;
	return ;
}
int pop(int *top , int stack[]){
	return stack[(*top)--];
}
void display(int top , int stack[]){
	if ( top == -1){
		printf("no elements to display \n");
		return;
	}
	int i;
	printf("The elements in stack are : \n");
	for (i = top ;i >= 0; i--){
		printf("%d \n", stack[i]);
	}
	printf("\n");
	return;
}
/*
void pushe(char ele , int *top , char stack[]){
	stack[++(*top)] = ele;
	return ;
}
char pope(int *top , char stack[]){
	return stack[(*top)--];
}
int check_pal( char ele_pal[] , char  pal[]){ 
	int a,b, i=0, tope =-1;
	char rev_pal[MAX];
	a = atoi(ele_pal);
	while (ele_pal[i] != '\0'){
		pushe( ele_pal[i], &tope , pal);
	}
	i=0;
	while( tope != -1){
		rev_pal[i] = pope(&tope , pal);
		i++;
	}
	b = atoi(rev_pal);
	if ( a == b ){
		return 1;
	}
	return 0;
}
*/

int main (){
	int  n, ch, ele ,stack[MAX], top = -1;
	char	pal[MAX];
	char ele_pal[MAX];
	printf("Enter the size of the stack : \n");
	scanf("%d",&n);
	for (;;)
	{
		printf("Enter 1 to push \n\
		Enter 2 to pop \n\
		Enter 3 to display \n\
		Enter 4 to check for palindrome \n\
		Enter 5 to exit the program \n");
		scanf ("%d",&ch);
		switch(ch)
		{
			case 1 : if (top == n-1){
				printf("Stack is full cannot push \n");
				break;
			}
			printf("Enter the element to be pushed \n");
			scanf("%d",&ele);
			push(ele , &top , stack);												 //function call 1 
			break;
			case 2 : if (top == -1 ){
				printf("Stack is empty cannot pop \n");
				break;
			}
			printf("The popped element is : %d \n", pop(&top, stack));					 //func call 2
			break;
			case 3 : display( top , stack);											//func call 3 
			break;
			/*case 4 : printf("Enter the integer to check for palindrome : \n");
			scanf("%s", ele_pal);														
			if (check_pal(ele_pal ,pal )){												//func call 4
				printf("The given number is a palindrome \n");
				break;
			}
			printf("The given numbe is not a palindrome \n");
			break;*/
			case 5 : exit (0);
			
		}
	}
	return 0;
	
}