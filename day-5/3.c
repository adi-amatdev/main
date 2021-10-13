#include <stdio.h>
int main()
{
    int i, j, size, num[100];
    printf("Enter the size of array: ");
    scanf("%d", &size);
    printf("Enter the array elements: ");
    for(i=0; i<size; i++)
       scanf("%d", &num[i]);
    for(i=0; i<size; i++)
    {
        for(j=i+1; j<size; j++)
        {
            if(num[i]==num[j])
            {
                printf("Not a distinct group.\n");
                return 0;
            }
        }
    }

    printf("It is a distinct group.\n");

    return 0;
}