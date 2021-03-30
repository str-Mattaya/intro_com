#include <stdio.h>
#include <ctype.h>

int main()
{
	int num;
	
	printf("Enter number: ");
	scanf(" %d", &num);
	
	if(num < 1)
		return -1;
		
	int prime = 1;
	int i = 2;
	while(i<num)
	{
		if(num%i == 0)
		{
			prime = 0;
			break;
		}
		i++;
	}
	
	printf("%d is ", num);
	if(prime == 0)
		printf("not ");
	printf("a prime number.");
	
	return 0;
}