#include <stdio.h>
#include <math.h>
#include <conio.h>

main()
{
	float r,h;
	
	printf("Radius and Height: "); scanf(" %f %f", &r, &h);
	printf("\nVolumn of Cone = %f cm^3", M_PI * pow(r,2) * h / 3);
	getch();
}
