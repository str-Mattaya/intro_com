#include <stdio.h>

int main()
{
	int i=0;
	
	int even = 0;
	
	printf("Enter 10 integers: ");
	
	while(i<10)
	{
		int num;
		scanf(" %d", &num);
		
		if(num%2 == 0)
			even++;
		
		i++;
	}
	
	printf("\nThere are...\n");
	
	printf("%d even number", even);
	if(even > 1)
		printf("s");
	
	printf("\n%d odd number", 10-even);
	if(10-even > 1)
		printf("s");
	
	return 0;
}
