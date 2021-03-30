#include <stdio.h>
#include <stdlib.h>

int main()
{
	int *arr;
	
	int n;
	
	int i=0;
	printf("Enter max array's elements: "); scanf(" %d", &n);
	
	if(n < 1) return -1;
	arr = (int *) malloc(sizeof(int) * n);
	
	printf("\n1st array:\n");
	while(i<n)
	{
		arr[i] = i+1;
		if(i%10 == 0 && i != 0)
			printf("\n");
		printf("%d ", arr[i]);
		i++;
	}
	i=0;
	printf("\n\n2nd array:\n");
	while(i<n)
	{
		if(i%10 == 0 && i != 0)
			printf("\n");
			
		printf("%d ", arr[i] * arr[i]);
		i++;
	}
	
	return 0;
}
