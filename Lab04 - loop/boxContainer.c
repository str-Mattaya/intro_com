#include <stdio.h>

int main()
{
	int i = 0;
	while(1)
	{
		char ch;
		printf("Box Code: ");
		scanf(" %c", &ch);
		
		if(ch == '+')
		{
			i++;
		}else if(ch == '-')
		{
			i--;
		}else if(ch == 'q' || ch == 'Q')
		{
			printf("Sum = %d", i);
			break;
		}else{
			printf("Invalid key, Try again\n\n");
		}
		
		if(i >= 10)
		{
			printf("\nFULL!!!");
			break;
		}else if(i < 0)
		{
			i = 0;
			printf("There is no box.\n\n");
		}
		
	}
	return 0;
}