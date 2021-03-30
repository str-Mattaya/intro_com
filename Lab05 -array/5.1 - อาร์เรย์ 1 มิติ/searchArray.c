#include <stdio.h>

int main()
{
	int arr[10] = {0};
	int i=0;
	
	printf("Enter 10 integers: ");
	
	while(i<10)
	{
		scanf(" %d", &arr[i]);
		i++;
	}
	
	int sNum;
	printf("\nSearch for Number: ");
	scanf(" %d", &sNum);
	
	for(i=0;i<10;i++)
	{
		if(arr[i] == sNum)
		{
			printf("Found %d at position #%d", sNum, i+1);
			return 0;
		}
	}
	printf("404 Not Found!!!");
	return 0;
}
