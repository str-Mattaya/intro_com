#include <stdio.h>

long long int f(int x)
{
	if(x == 1)
		return 1;
	return 2*x*f(x-1);
}

int main()
{
	int x;
	printf("Enter x: "); scanf(" %d", &x);
	
	printf("\n");
	if(x < 1)
	{
		printf("Must be more than or equal to 1");
		return -1;
	}
	printf("f(%d) = %lld", x, f(x));
	
	return 0;
}
