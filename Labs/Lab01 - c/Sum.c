#include <stdio.h>
#include <conio.h>

main()
{
	float i=0,j=0;
	printf("Enter 1st number: "); scanf(" %f",&i);
	printf("Enter 2nd number: "); scanf(" %f",&j);
	
	float sum = i+j;
	printf("\nResult: %.2f", sum);
	getch();
}
