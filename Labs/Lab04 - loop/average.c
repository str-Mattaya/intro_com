#include <stdio.h>

int main()
{
	int num;
	printf("Enter number: "); scanf(" %d", &num);
	
	if(num < 1)
		return -1;
	
	printf("\nAverage of the summation from 1 to %d = %.2f", num, (num*(num+1)/2.0)/num);
	
	return 0;
}
