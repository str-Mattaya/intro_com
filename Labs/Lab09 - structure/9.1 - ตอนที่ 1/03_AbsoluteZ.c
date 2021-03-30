#include <stdio.h>
#include <math.h>

typedef struct complex
{
	double re;
	double im;
};

int main()
{
	complex z;
	
	printf("Enter Re(z): ");
	scanf(" %lf", &z.re);
	printf("Enter Im(z): ");
	scanf(" %lf", &z.im);
	
	printf("\n|z| = %.3lf", sqrt(pow(z.re,2)+pow(z.im,2)));
}