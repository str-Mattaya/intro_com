#include <stdio.h>

void display(int a[5])
{
	int i=0;
	while(i < 5)
	{
		printf("%d\n", a[i++]);
	}
}

int main()
{
	int arr[] = {0,1,2,3,4};
	display(arr);
	return 0;
}
