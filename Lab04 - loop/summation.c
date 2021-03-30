#include <stdio.h>
#include <ctype.h>

int main()
{
	int i,num;
	float sum = 0;
	
	printf("How much number do you want?: ");
	scanf(" %d", &num);
	
	if(num <= 0)
		return -1;
	
	printf("\n");
	
	for(i=0;i<num;i++)
	{
		float j;
		printf("Enter number: ");
		scanf(" %f", &j);
		sum += j;
	}
	
	printf("\nSum = %.2f", sum);
	
	return 0;
}