#include <stdio.h>

int main()
{
  
  int a;
  int* ptrtoa;

  ptrtoa = &a;

  a = 5;
  printf("The value of a is %d\n", a);

  *ptrtoa = 6;
  printf("The value of a is %d\n", a);

  printf("The value of ptrtoa is %d\n", ptrtoa);
  printf("It stores the value %d\n", *ptrtoa);
  printf("The address of a is %d\n", &a);
  float c = 3.5;
  float d = 7.4;
  printf("The value of c is %f and the address is %d\n",c,&c );
  printf("The value of d is %f and the address is %d\n",d,&d );
  int* ptrtoc;
  int* ptrtod;
  int temp;
  ptrtoc = &c;
  ptrtod = &d;
  temp = *ptrtoc;
  *ptrtoc = *ptrtod;
  *ptrtod = temp;
  printf("The value of c is %f and the address is %d\n",c,&c );
  printf("The value of d is %f and the address is %d\n",d,&d );
}
