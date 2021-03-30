#include <stdio.h>
#include <stdlib.h>

int main()
{
	int *arr;
	int i;
	
	int n;
	
	printf("Enter max array's elements: "); scanf(" %d", &n);
	
	if(n < 1) return -1;
	arr = (int *) malloc(sizeof(int) * n);
	
	printf("Enter %d integers: ", n);
	for(i=0;i<n;i++)
	{
		scanf(" %d", &arr[i]);
	}
	
	printf("\nReverse order: ");
	for(i=n-1;i>=0;i--)
	{
		printf("%d ", arr[i]);
	}
	
	return 0;
}
