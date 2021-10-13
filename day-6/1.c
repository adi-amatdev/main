#include <stdio.h>

int main()
{
    char character, str[100];

    // read & print a string using puts() and gets()
    printf("Enter a string: ");
    fgets(str, 100, stdin);// it is a dangerous funnction
    puts(str);
    // read and print a single character using getchar() and  putchar()
    printf("Enter a character: ");
    character=getchar();
    putchar(character);
    // read & print a single character using scanf() & printf()
    printf("Enter a character: ");
    scanf("%c", &character);
    printf("%c\n", character);
    // read a character using getch() & getche() 
     printf("You entered: ", getch()); 
       printf("You entered: ", getche()); 

    return 0;
}
