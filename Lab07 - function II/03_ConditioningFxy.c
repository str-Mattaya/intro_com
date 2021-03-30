#include <stdio.h>

double Get_Fxy(float x, float y)
{
	float sum = x+y;
	if(sum >= 0)
		return sum;
	else
		return y-x;
}

int main()
{
	float x,y;
	printf("Enter x: "); scanf(" %f", &x);
	printf("Enter y: "); scanf(" %f", &y);
	
	printf("\nf(x,y) = %.2lf", Get_Fxy(x,y));
	
	return 0;
}
