#include <stdio.h>

int main()
{
	int yy;
	printf("Enter year: "); scanf(" %d", &yy);
	if(yy <= 0) return -1;
	
	if(yy%400 == 0 || (yy%4 == 0 && !(yy%100 == 0)))
	{
		printf("Leap Year");
	}else
	{
		printf("Not Leap Year");
	}
	
	return 0;
}