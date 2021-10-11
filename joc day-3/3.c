#include <stdio.h>

int main()
{
    int count=0, num=0, sum=0, rem;
    printf("Enter an integer: ");
    scanf("%d", &num);
    if (num!=0)
    {
    while(num!=0)
    {
        rem=num%10;
        sum+=rem;
        num/=10;
        count++;
    }
    printf("Increased sum: %d\n", sum+count);
    }
    else
    {
    num++;
     printf("Increased sum: %d\n", num);
    }
    
    return 0;
}
