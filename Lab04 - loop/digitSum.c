#include <stdio.h>
#include <ctype.h>

int main()
{
	int num;
	
	printf("Enter number: ");
	scanf(" %d", &num);
	
	if(num < 0)
		return -1;
	
	int sum = 0;
	
	while(num > 0)
	{
		sum += (num%10);
		num /= 10;
	}
	
	printf("\nSum = %d", sum);
	
	return 0;
}