#include <stdio.h>
#include <math.h>

int main()
{
	double x;
	printf("Enter X: "); scanf(" %lf", &x);
	
	printf("\nsqrt(%.2lf) = %.2lf", x, sqrt(abs(x)));
	if(x < 0)
		printf("i");
	
	return 0;
}
