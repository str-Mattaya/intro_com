#include <stdio.h>
#include <stdlib.h>

int main()
{
	int *arr;
	int i=0;
	
	int n;
	
	printf("Enter max array's elements: "); scanf(" %d", &n);
    if(n < 1) return -1;
    
    arr = (int*)malloc(sizeof(int) * n);
	
	printf("Enter %d integers: ", n);
	
	while(i<n)
	{
		scanf(" %d", &arr[i]);
		i++;
	}
	
	int sNum;
	printf("\nSearch for Number: ");
	scanf(" %d", &sNum);
	
	for(i=0;i<n;i++)
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
