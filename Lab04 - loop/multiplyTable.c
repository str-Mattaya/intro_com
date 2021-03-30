#include <stdio.h>

int main()
{
	int a;
	printf("Enter number: ");
	scanf(" %d", &a);
	printf("\n");
	
	int i = 1;
	while(i <= 12)
	{
		printf("%d * %2d = %3d\n", a, i, a*i++);
	}
	
	return 0;
}