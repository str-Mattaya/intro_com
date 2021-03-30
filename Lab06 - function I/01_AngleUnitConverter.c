#include <stdio.h>
#include <math.h>

int main()
{
	double angle;
	printf("- We will use M_PI instead of defining new pi value -");
	printf("\n\nEnter angle in degree unit: ");
	scanf(" %lf", &angle);
	
	printf("\n%.2lf degree = %.2lf radian", angle, angle*M_PI/180);
	
	return 0;
}
