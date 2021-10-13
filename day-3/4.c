#include <stdio.h>
#include <string.h>

int main()
{
    int i;
    char str[100];

    printf("Enter an integer: ");
    gets(str);
    printf("Digits extracted: ");

    for (i=0; i<strlen(str); i++)
    {
        if(str[i]!='0')
            printf("%c", str[i]);
        else
            continue;
    }

    printf("\n");

    return 0;
}