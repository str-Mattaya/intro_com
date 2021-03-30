#include <stdio.h>

int main()
{
	int i = 1;
	while(i <= 12)
	{
		printf("5 * %2d = %2d\n", i, 5*i++);
	}
	
	return 0;
}