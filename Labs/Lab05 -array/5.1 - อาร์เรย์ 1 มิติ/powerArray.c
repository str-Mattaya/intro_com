#include <stdio.h>
#include <math.h>

int main()
{
	int arr[10] = {0};
	int powArr[10] = {0};
	
	int i=0;
	printf("1st array: ");
	while(i<10)
	{
		powArr[i] = (int)pow(i+1,2);
		arr[i] = i+1;
		printf("%3d ", arr[i++]);
	}
	i=0;
	printf("\n2nd array: ");
	while(i<10)
	{
		printf("%3d ", powArr[i++]);
	}
	
	return 0;
}
