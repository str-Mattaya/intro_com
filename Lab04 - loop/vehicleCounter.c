#include <stdio.h>
#include <ctype.h>

int main()
{
	char ch = '0';
	
	int car = 0, motorcycle = 0;
	int time = 0;
	
	while(1)
	{
		printf("Enter code: ");
		scanf(" %c", &ch);
		
		ch = tolower(ch);
		
		if(ch == 'a')
		{
			motorcycle++;
			time++;
		}
		else if(ch == 'b')
		{
			motorcycle--;
			time++;
		}
		else if(ch == 'c')
		{
			car++;
			time++;
		}
		else if(ch == 'd')
		{
			car--;
			time++;
		}
		else if(ch == 'q')
		{
			printf("\nQuitting Program....");
			break;
		}else
		{
			printf("\nTry again!!!\n");
		}
		
		if(time >= 10)
		{
			printf("\n----------------------------\n");
			printf("\nThere are...\n");
			
			printf("%d car", car);
			if(car > 1)
				printf("s");
			
			printf("\n%d motorcycle", motorcycle);
			if(motorcycle > 1)
				printf("s");
			
			printf("\n\n----------------------------\n");
			time = 0;
		}
	}
	
	return 0;
}
