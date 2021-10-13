#include <stdio.h>
int main()
{
   int array[100]={2,6,10,14,18,3,7,11,15,19}, position, c=0, n=10;
   printf("Enter the position in which element you want to delete is present \n");
   scanf("%d", &position);
   if (position >= n+1)
      printf("Deletion not possible.\n");
   else
   {
      for (c = position - 1; c < n - 1; c++)
         array[c] = array[c+1];

      printf("Resultant array:\n");

      for (c = 0; c < n - 1; c++)
         printf("%d ", array[c]);
   }
}