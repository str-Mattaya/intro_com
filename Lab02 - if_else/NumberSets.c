#include <stdio.h>

int main()
{
	printf("Enter number: ");
	int num; scanf(" %d", &num);
	
	if(num < 0)
	{
		printf("Negative");
	}else if (num > 0)
	{
		printf("Positive");
	}else
	{
		printf("Zero");
	}
	return 0;
}