#include <stdio.h>
#include <conio.h>

main()
{
	int yy,by; float w=1,h=1;
	printf("This year: "); scanf(" %d",&yy);
	printf("Birth year: "); scanf(" %d",&by);
	printf("Weight(kg): "); scanf(" %f",&w);
	printf("Height(cm): "); scanf(" %f",&h);
	
	printf("--------------\n");
	printf("Age: %d\n", yy-by);
	printf("BMI: %f\n", 10000*w/(h*h));
	printf("BMR(male): %f\n", 66 + (13.75*w) + (5*h) - (6.8*(yy-by)));
	printf("BMR(female): %f\n", 655 + (9.6*w) + (1.8*h) - (4.7*(yy-by)));
	printf("--------------\n");
}
