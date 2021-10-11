
#include <stdio.h>

int main()
{
    printf ("enter cet rank\n");
    long r;
    scanf("\n %ld",&r);
    printf("\n the possible branch allotment is:\n");
    if (r>=22340)
        printf("admission is not possible");
    else if (r>12012 && r<=22340)
        printf("alloted is branch is MECH ");
    else if (r>6505 && r<=12012)
        printf("alloted  branch is E&C ");
    else if (r>3250 && r<=6505)
        printf("alloted branch is ISE");
    else if (r<=3250)
        printf ("alloted branch is CSE");

    return 0;
}