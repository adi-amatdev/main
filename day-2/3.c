#include <stdio.h>
int main()
{
  char op;
  int a,b;
  printf("Enter an operator : ");
  scanf("%c", &op);
  printf("Enter two operands: ");
  scanf("%d %d", &a, &b);

  switch (op)
  {
    case '+':
      printf("%d + %d = %d", a,b, a + b);
      break;
    case '-':
      printf("%d - %d = %d", a, b,a - b);
      break;
    case '*':
      printf("%d * %d = %d", a, b, a* b);
      break;
    case '/':
       if (b!=0)
      printf("%d / %d = %d", a, b, a/b );
      else if(b==0)
      printf("try a denominator value without 0");
      break;
    case '%':
      printf("%d mod %d = %d",a,b,a%b);  
    
  }

  return 0;
}