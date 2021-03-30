#include <stdio.h>
#include <conio.h>

main()
{
	float kg = 0.0;
	printf("Weight(kg): "); scanf(" %f", &kg);
	printf("Weight(lb): %.1f", 2.2 * kg);
	getch();
}
