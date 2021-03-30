#include <stdio.h>
#include <stdlib.h>

int main()
{
	int *arr;
	int n;
	
	printf("Enter max array's elements: "); scanf(" %d", &n);
	
	if(n < 1) return -1;
	arr = (int *) malloc(sizeof(int) * n);
	
	printf("Enter array: ");
	scanf(" %d", &arr[0]);
	
	int mini = arr[0];
	int maxi = arr[0];
	
	int i=1;
	while(i<n)
	{
		scanf(" %d", &arr[i]);
		
		if(arr[i] > maxi)
			maxi = arr[i];
			
		if(arr[i] < mini)
			mini = arr[i];
		
		i++;
	}
	
	printf("\nMinimum Value = %d", mini);
	printf("\nMaximum Value = %d", maxi);
	
	return 0;
}
