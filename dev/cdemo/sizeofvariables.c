#include<stdio.h>

int main()
{
  int a = 545;
  float b = 2.3;
  double c =500.324;
  char d = a;
  unsigned int e = 25;
  short int f = 314;
  // print value and size of an int variable
  printf("int a value %d (oct %o, hex %x) and size %d bytes.\n", a, a, a, sizeof(a));
  printf("float b value %d (oct %o, hex %x) and size %d bytes.\n", b, b, b, sizeof(b));
  printf("double c value %d (oct %o, hex %x) and size %d bytes.\n", c, c, c, sizeof(c));
  printf("char d value %d (oct %o, hex %x) and size %d bytes.\n", d, d, d, sizeof(d));
  printf("unsigned int e value %d (oct %o, hex %x) and size %d bytes.\n", e, e, e, sizeof(e));
  printf("short int f value %d (oct %o, hex %x) and size %d bytes.\n", f, f, f, sizeof(f));

}

