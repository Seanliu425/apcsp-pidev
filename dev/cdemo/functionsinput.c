#include <stdio.h>

float areaOfCircle(float a) 
 {
	return(a*a*3.14);
 }

int main(int argc, char* argv[])
{
	float a;
	float low;
	float high;
	char input[256], name [256];
	float r;
	r = areaOfCircle(a);
	int arg = 0;
	printf("Enter a low bound\n");
	fgets(input, 256, stdin);	
	sscanf(input, "%f", &low);
	while (1)
	{
		if (sscanf(input, "%f", &low) != 1)
{
		printf("Not a valid number - try again!\n");}
		else{
			 break;}
	}
	printf("Enter a high bound\n");
	fgets(input, 256, stdin);
	sscanf(input, "%f", &high);
	while (1)
	{
		if (sscanf(input, "%f", &high) == 1) break;
		printf("Not a valid number - try again!\n");
	}
//	while (arg < argc)
	if (low > high)
	{
		float swap = high;
		high = low;
		low = swap;
	}
	for (float a = low; a < high + 1; a++)
	{
		r = areaOfCircle(a);
		printf("Area of Circle = %f\n",r);
		arg ++;
	}
	

}
