#include <stdio.h>
 
int countdigt(long n)
{
    int count = 0;
    while (n != 0)
    {
        n = n / 10;
        ++count;
    }
    return count;
}
 
int main(void)
{
    long  n = 001210;
    printf("Number of digits : %d", countdigt(n));
    return 0;
}

