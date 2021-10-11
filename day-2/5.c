
#include <stdio.h>

int main()
{
    int num=0, total=0;
    float amt=0.0, dis=0.0;

    printf("Enter the number of books: ");
    scanf("%d", &num);

    if(num<=10000)
    {
        printf("No discount.\n");
        amt=num*10;
    }
    else if(num>10000 && num<=15000)
    {
        printf("You've obtained 10%% discount.\n");
        total=num*10;
        dis=0.1*total;
        amt=total-dis;
    }
    else if(num>15000 && num<=20000)
    {
        printf("You've obtained 20%% discount.\n");
        total=num*10;
        dis=0.2*total;
        amt=total-dis;
    }
	else
	{
		printf("You can purchase upto 20000 books.\n");
		return 0;
	}

	printf("The total cost = ₹%.3f\n", amt);
    printf("The total discount = ₹%.3f\n", dis);

    return 0;
}