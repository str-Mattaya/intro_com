#include <stdio.h>

int main()
{
	int arr[10];
	int i;
	
	printf("Enter 10 integers: ");
	for(i=0;i<10;i++)
	{
		scanf(" %d", &arr[i]);
	}
	
	printf("\nReverse order: ");
	for(i=9;i>=0;i--)
	{
		printf("%d ", arr[i]);
	}
	
	return 0;
}
