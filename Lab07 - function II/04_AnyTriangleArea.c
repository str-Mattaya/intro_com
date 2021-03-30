#include <stdio.h>
#include <math.h>

double s(float a, float b, float c)
{
	return (a+b+c)/2;
}

double area(float a, float b, float c)
{
	double ss = s(a,b,c);
	return sqrt(ss*(ss-a)*(ss-b)*(ss-c));
}

int main()
{
	float a,b,c;
	printf("Enter a: "); scanf(" %f", &a);
	printf("Enter b: "); scanf(" %f", &b);
	printf("Enter c: "); scanf(" %f", &c);
	
	printf("\n");
	if(a <= 0 || b <= 0 || c <= 0)
	{
		printf("Length can't be less or equal to zero.");
		return -1;
	}
	
	if(a+b <= c || a+c <= b || b+c <= a)
	{
		printf("It is not triangle.");
		return -2;
	}
	
	printf("Area = %.2lf", area(a,b,c));
	
	return 0;
}
