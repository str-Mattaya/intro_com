#include <stdio.h>

typedef struct complex
{
	double re;
	double im;
};

int main()
{
	complex a,b;
	printf("Enter Re(a): ");
	scanf(" %lf", &a.re);
	printf("Enter Im(a): ");
	scanf(" %lf", &a.im);
	printf("Enter Re(b): ");
	scanf(" %lf", &b.re);
	printf("Enter Im(b): ");
	scanf(" %lf", &b.im);
	
	printf("\na + b = %.2lf + %.2lfi", a.re+b.re, a.im+b.im);
}