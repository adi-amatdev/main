#include <stdio.h>
int main()
{
    int arr[100] = { 2,6,10,14,18,3,7,11,15,19 };
    int i, x, pos, n = 10;
   for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
    x = 22;
    pos = 5;
    n++;
    for (i = n-1; i >= pos; i--)
        arr[i] = arr[i - 1];
    arr[pos - 1] = x;
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
 
    return 0;
}