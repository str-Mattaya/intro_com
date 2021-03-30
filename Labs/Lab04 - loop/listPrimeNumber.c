#include <stdio.h>

int main()
{
	int i=2,num;
	printf("Enter number: ");
	scanf(" %d", &num);
	
	if(num < 2)
		return -1;
	
	while(i<=num)
	{
		int j = 2;
		int prime = 1;
		while(j < i)
		{
			if(i%j == 0)
			{
				prime = 0;
				break;
			}
			j++;
		}
		if(prime == 1)
		{
			printf("%d ",i);
		}
		i++;
	}
	
	return 0;
}