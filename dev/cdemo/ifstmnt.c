#include <stdio.h>

int main()
{
  int a = 0;
  int b = 2;
  int c = 3;
  int d = 0;

  // if statement to test is a is equal to 0
  printf("a = %d  b = %d  c = %d d = %d\n", a, b, c, d);
  if (a == 0)
  {
    printf("a is 0\n");
  }
  else
  {
    printf("a is not 0\n");
  }
  if (a > b)
  {
    printf("a is greater than b\n");
  }
  if (a < b)
  {
    printf("a is less than b\n");
  }
  if (c >= b)
  {
    printf("c is greater than or equal to b\n");
  }
  if (a == 0 && b==0)
  {
    printf("a is equal to 0 and be is equal to 0\n");
  }
  if (a == 0 || c == 0)
  {
    printf("a is equal to 0 or c is equal to 0\n");
  }
  if (c != 0)
  {
    printf("c is not equal to 0\n");
  }
    
}
