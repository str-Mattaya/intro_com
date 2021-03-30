#include <stdio.h>

int main()
{
	printf("Enter number: ");
	int num; scanf(" %d",&num);
	
	if(num < 0)
		printf("Negative");
	else if(num > 0)
		printf("Positive");
	else
		printf("Zero");
	
	printf("-");
	
	if(num%2 == 0)
		printf("Even");
	else
		printf("Odd");
	return 0;
}