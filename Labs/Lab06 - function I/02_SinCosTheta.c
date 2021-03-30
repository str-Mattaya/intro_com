#include <stdio.h>
#include <math.h>

int main()
{
	double angle;
	printf("Enter angle in degree unit: "); scanf(" %lf", &angle);
	
	printf("\n");
	printf("sin(%.2lf degree) = %.2lf\n", angle, sin(angle * M_PI / 180));
	printf("cos(%.2lf degree) = %.2lf\n", angle, cos(angle * M_PI / 180));
	
	return 0;
}
