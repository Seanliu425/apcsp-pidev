#include <stdio.h>

int main()
{
	float a;
	float areaOfCircle(float a) 
      {return(a*a*3.14);}
float r;
r = areaOfCircle(a);
for (float a = 3.5; a < 13.5; a++)
{
r = areaOfCircle(a);
printf("Area of Circle = %f\n",r);
}

}
