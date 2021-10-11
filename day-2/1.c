
#include <stdio.h>

int main()
{
    int a;
    printf("\n enter voter age\n");
    scanf("%d",&a);
    if(a>=18)
    printf("voter is eligible for voting \n");
    else
    printf("voter is not eligble for voting ");
	return 0;
}
#include <stdio.h>
 int main()
 {
 int a;
 scanf("%d",&a);
 (a>=18)?printf("voter is eligible \n"):printf("voter is inelligible\n");
 }