#include <stdio.h>
#include <math.h>

int main()
{
	double x,y;
	printf("X = "); scanf(" %lf", &x);
	printf("Y = "); scanf(" %lf", &y);
	
	printf("\n%.2lf ^ %.2lf = ",x,y);
	if(x == 0 && y <= 0)
	{
		printf("undefined");
		return 0;
	}
	printf("%.2lf",pow(x,y));
	
	return 0;
}
