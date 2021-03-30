#include <stdio.h>

double Get_fx(float x)
{
	if(x > 0)
		return x*x + 2*x + 3;
	else if(x < 0)
		return x-2;
	else
		return 0;
}

int main()
{
	float x;
	printf("Enter x: "); scanf(" %f", &x);
	
	printf("\nf(x) = %.2lf", Get_fx(x));
	
	return 0;
}
