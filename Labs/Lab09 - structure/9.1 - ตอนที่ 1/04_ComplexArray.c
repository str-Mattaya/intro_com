#include <stdio.h>

typedef struct complex
{
	double re;
	double im;
};

typedef struct complex complex;

int main()
{
	complex a[3];
	int i;
	
	for(i=0;i<3;i++)
	{
		printf("Enter Re(a%d): ", i+1);
		scanf(" %lf", &a[i].re);
		printf("Enter Im(a%d): ", i+1);
		scanf(" %lf", &a[i].im);
	}
	
	printf("\n");
	for(i=0;i<3;i++)
	{
		printf("a%d = %.2lf + %.2lfi\n", i+1,a[i].re, a[i].im);
	}
}