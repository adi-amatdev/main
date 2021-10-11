#include <stdio.h>
//prgrm for greatest of 2 no s 
int main()
{
    int a,b;
    printf("enter 2 no s 'a' & 'b' \n");
    scanf("%d%d",&a,&b);
    if (a<0 || b<0)
    printf("please try again without negative numbers \n");
    else 
    {
        if(a>b)
    printf("\n a is greater than b that is %d>%d",a,b);
    else 
    printf("\n b is greater than a that is %d>%d",b,a);
    }
	return 0;
	
}
#include <stdio.h>
//prgrm for greatest of 3 no s 
int main()
{
    int a,b,c,big ;
    printf("enter 3 no s 'a','b' , 'c' \n");
    scanf("%d%d%d",&a,&b,&c);
    if (a<0 || b<0 || c<0)
    printf("please try again without negative numbers \n");
    else 
    {
        big = a>b?(a>c?a:c):(b>c?b:c);
        printf("\n biggest of three numbers is %d",big);
    }
	return 0;
	
}