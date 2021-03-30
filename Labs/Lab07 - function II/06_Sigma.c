#include <stdio.h>

int main()
{
	int n=1;
	while(n > 0)
	{
		printf("Enter n: "); scanf(" %d", &n);
		if(n > 0)
		{
			printf("Sigma of %d = %lld\n\n", n, n*(n+1)/2);
		}
	}
	
	printf("\nEnd of Program");
	return 0;
}
