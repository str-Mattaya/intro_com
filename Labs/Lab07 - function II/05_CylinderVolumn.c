#include <stdio.h>
#include <math.h>

double cylinder(float d, float h)
{
	return M_PI * pow(d/2,2) * h;
}

int main()
{
	float d,h;
	printf("Enter diameter: "); scanf(" %f", &d);
	printf("Enter height: "); scanf(" %f", &h);
	
	printf("\n");
	if(d <= 0 || h <= 0)
	{
		printf("Length can't be less or equal to zero.");
		return -1;
	}
	
	printf("Cylinder Volumn = %.2lf", cylinder(d,h));
	
	return 0;
}
