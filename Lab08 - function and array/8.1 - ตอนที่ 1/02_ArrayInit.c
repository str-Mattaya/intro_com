#include <stdio.h>

void init(int a[10], int value)
{
	int i=0;
	while(i < 10)
	{
		a[i++] = value;
	}
}

void display(int a[10])
{
	int i=0;
	while(i < 10)
	{
		printf("%d\n", a[i++]);
	}
}

int main()
{
	int arr[10];
	init(arr, 1);
	display(arr);
	return 0;
}
