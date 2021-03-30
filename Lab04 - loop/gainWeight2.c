#include <stdio.h>

int main()
{
	float weight = 0;
	float i;
	
	while(weight <= 400)
	{
		printf("Enter weight: ");
		scanf(" %f", &i);
		if(i <= 0)
			printf("Try again\n\n");
		else
			weight += i;
	}
	
	printf("\nOverload!!!");
	printf("\nWeight before overload = %.2f", weight - i);
	
	return 0;
}