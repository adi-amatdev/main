#include<stdio.h>
int main()
{
    int i,n=0 ,q,d=1000,calc;
    printf("\n enter pin code word :\n");
    scanf ("%d",&n);
    printf("\n decoded pin is:\n");
    for(i=0;i<n;i++)
    {
        q=(n/d);
        calc=(q+1)%10;
        printf("%d", calc);
        n-=q*d;
        d/=10;
    }
    return 0;
    
}