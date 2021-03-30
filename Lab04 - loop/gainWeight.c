#include <stdio.h>

int main()
{
	float weight = 0;
	while(weight <= 400)
	{
		float i;
		printf("Enter weight: ");
		scanf(" %f", &i);
		if(i <= 0)
			printf("Try again\n\n");
		else
			weight += i;
	}
	
	printf("\nOverload!!!");
	
	return 0;
}