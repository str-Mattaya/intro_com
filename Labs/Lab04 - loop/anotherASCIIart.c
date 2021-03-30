#include <stdio.h>

int main()
{
	int i = 0;
	while(i < 5)
	{
		int j = 0;
		while(j < 5)
		{
			if(i > j)
				printf("  ");
			else
				printf("* ");
			
			j++;
		}
		printf("\n");
		i++;
	}
	return 0;
}