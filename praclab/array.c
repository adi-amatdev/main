#include<stdio.h>
#include<stdlib.h>
void  del_arr(int *n , int pos ,int  arr[]);
void insert_arr(int *n , int pos , int arr[]);
void display(int n, int arr[]);
int main()
 {
	int arr[100], n, ch,i,pos ;
	printf("Enter the size of the array : \n");
	scanf("%d",&n);
	printf("Enter %d elements \n", n);
	for (i=0 ;i<n;i++)
		scanf("%d",&arr[i]);
	for(;;)
	{
		printf("Enter 1 to insert at a specific pos  \n\
		2 to delete at a specific pos \n\
		3 to display\n\
 		4 to exit \n ");
		scanf("%d",&ch);
		switch (ch)
		{
			case 1 : printf("Enter a valid pos for insertion : \n");
			scanf("%d",&pos);
			insert_arr(&n ,pos , arr);
			break;
			case 2 : printf ("Enter a valid pos to delete an element : \n");
			scanf ("%d",&pos );
			del_arr(&n , pos , arr);
			break;
			case 3 : display(n, arr);
			break;
			case 4 : exit(0);
		}
	}
	return 0;
 }
 void  del_arr(int *n , int pos ,int  arr[])
 {
	 int i;
	 if (pos > 0 && pos <= *n)
	 {
		 printf("The deleted element is : %d\n ", arr[pos-1]);
		 for ( i = pos-1; i<*n ; i++)
			 arr[i] = arr [i+1];
		 *n -= 1;
	 }
	 else 
		 printf("Deletion not possible .. \n");
	 
	 return;
 }
 void insert_arr(int *n ,int pos , int arr[])
 {
	 int i,ele;
	if (pos>0 && pos<=(*n+1))
	{
		printf("Enter the element to be inserted : \n");
		scanf("%d",&ele);
		for (i= *n-1; i>= pos-1; i--)
		{
			arr[i+1] = arr[i];
		}
		arr[pos-1] = ele;
		*n += 1;
	}
	else
		printf("Insertion not possible \n");
	return ;
	
}
void display(int n , int arr[])
{
	int i;
	if (n != 0){
		printf("The elements of the array are : \n");
		for (i=0 ;  i < n;  i ++)
			printf("%d ", arr[i]);
		printf("\n");
		return;
	}
	else 
	{
		printf("no elements to display .. \n");
		return;
	}
}