#include <stdio.h>

int main()
{
	int arr[10] = {0};
	printf("Enter array: ");
	scanf(" %d", &arr[0]);
	
	int mini = arr[0];
	int maxi = arr[0];
	
	int i=1;
	while(i<10)
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
