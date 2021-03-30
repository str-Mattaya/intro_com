#include <stdio.h>
#include <conio.h>

main()
{
	float p,c,f;
	printf("Enter protein(g): "); scanf(" %f", &p);
	printf("Enter carbohydrate(g): "); scanf(" %f", &c);
	printf("Enter fat(g): "); scanf(" %f", &f);
	
	printf("\nTotal calories = %f kcal", 4*(p+c) + 9*f);
	getch();
}
