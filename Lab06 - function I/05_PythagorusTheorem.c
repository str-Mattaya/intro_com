#include <stdio.h>
#include <math.h>

int main()
{
	double a,b;
	printf("Enter A: "); scanf(" %lf", &a);
	printf("Enter B: "); scanf(" %lf", &b);
	
	printf("\nsqrt(%.2lf^2 + %.2lf^2) = %.2lf", a,b,sqrt(a*a+b*b));
	return 0;
}
