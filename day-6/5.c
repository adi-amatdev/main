#include <stdio.h>
#include <string.h>

int main()
{
    int i, lenstr, count=0;
    char string[30];

    printf("Enter a string: ");
    scanf("%[^\n]%*c", string);
    lenstr=strlen(string);

    for(i=0; i<lenstr/2; i++)
    {
    	if(string[i]==string[lenstr-i-1])
    	count++;
 	}
 	if(count==i)
 	    printf("%s is palindrome.\n", string);
    else
        printf("%s is not palindrome.\n", string);

    return 0;
}