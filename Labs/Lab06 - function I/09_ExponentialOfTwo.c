#include <stdio.h>

//Recursive fx
int exp2(int n)
{
	if(n == 1)
		return 2;
	return 2 * exp2(n-1);
}

int main()
{
	int n = -1;
	while(n <= 0)
	{
		printf("Enter number: ");
		scanf(" %d", &n);
	}
	
	printf("\n2 ^ %d = %d", n, exp2(n));
	
	return 0;
}
