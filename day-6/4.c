
#include <stdio.h>
#include <string.h>

int main()
{
    int i, count=1;
    char string[30];

    printf("Enter a string: ");
    scanf("%[^\n]%*c", string);

    for(i=0; i<strlen(string); i++)
    {
        if(string[i]==' ' && string[i+1] != ' ')
            count++;
    }

    string[i]='\0';

    printf("%s has %d words.", string, count);
    printf("\n");

    return 0;
}