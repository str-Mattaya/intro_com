#include <stdio.h>
#include <conio.h>

main()
{
	float c = -273;
	printf("Temperature(C): "); scanf(" %f", &c);
	printf("Temperature(F): %.1f", 32 + (9*c/5));
	getch();
}
