#include <stdio.h>

int calc(int d);

int main()
{
    int n;
    printf("Enter an integer: ");
    scanf("%d",&n);

    printf("Sum of digits: %d\n", calc(n));
    printf("Single digit sum: %d\n", calc(calc(n)));

    return 0;
}

int calc(int d)
{
    int sum=0, rem;

    while(d!=0)
    {
        rem=d%10;
        sum+=rem;
        d/=10;
    }

    return sum;
}