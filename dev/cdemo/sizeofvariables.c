#include<stdio.h>

int main()
{
  int a = 545;
  float b = 2.3;
  double c =500.324;
  char d = 'A';
  unsigned int e = 25;
  short int f = 314;
  // print value and size of an int variable
  printf("int a value %d has size %d bytes.\n", a, sizeof(a));
  printf("float b value %f has size %d bytes.\n", b, sizeof(b));
  printf("double c value %f has size %d bytes.\n", c, sizeof(c));
  printf("char d value %c has size %d bytes.\n", d, sizeof(d));
  printf("unsigned int e value %d has size %d bytes.\n", e, sizeof(e));
  printf("short int f value %d has  size %d bytes.\n", f, sizeof(f));

}

