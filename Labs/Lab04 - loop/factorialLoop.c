#include <stdio.h>

int main()
{
	int num = 1;
	long long int factorial = 1;
	long long int i = 1;
	
	while(1)
	{
		printf("Enter n: "); scanf(" %d", &num);
		if(num < 1)
		{
			printf("\nSTOP");
			return -1;
		}
		
		while(i <= num)
		{
			factorial *= i;
			i++;
		}
		printf("n! = %lld\n\n", factorial);
		i=1;
		factorial = 1;
	}
	return 0;
}
