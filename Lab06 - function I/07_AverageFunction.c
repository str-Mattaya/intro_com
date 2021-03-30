#include <stdio.h>

float average(float arr[])
{
	float sum = 0;
	int i=0;
	while(i<3)
	{
		sum += arr[i++];
	}
	return sum / 3;
}

int main()
{
	float arr[3] = {0};
	
	int i=0;
	while(i < 3)
	{
		printf("Enter num%d: ", i+1);
		scanf(" %f", &arr[i++]);
	}
	
	printf("\nAverage = %.1f", average(arr));
	
	return 0;
}
