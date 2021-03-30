#include <stdio.h>

int main()
{
	typedef short int si;
	typedef long long int lli;
	typedef long int li;
	printf("Size of int: %d\n", sizeof(int));
	printf("Size of char: %d\n", sizeof(char));
	printf("Size of float: %d\n", sizeof(float));
	printf("Size of double: %d\n", sizeof(double));
	printf("Size of short: %d\n", sizeof(si));
	printf("Size of long int: %d\n", sizeof(li));
	printf("Size of long long int: %d\n", sizeof(lli));
	return 0;
}