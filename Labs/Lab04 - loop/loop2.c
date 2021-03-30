#include <stdio.h>

int main()
{
	int i = 1;
	while(i <= 30)
	{
		printf("%2d ", i++);
		
		if(i%10 == 1 && i != 1)
			printf("\n");
	}
	
	return 0;
}