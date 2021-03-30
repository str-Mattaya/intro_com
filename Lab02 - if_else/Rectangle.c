#include <stdio.h>

int main()
{
	float w,h;
	printf("Enter W: "); scanf(" %f", &w);
	printf("Enter H: "); scanf(" %f", &h);
	
	if(w <= 0 || h <= 0) return -1;
	
	if(w == h)
		printf("Square");
	else
		printf("Rectangle");
	return 0;
}