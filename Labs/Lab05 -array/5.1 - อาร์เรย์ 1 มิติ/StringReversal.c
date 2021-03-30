#include <stdio.h>
#include <string.h>

int main()
{
	char str[256];
	printf("Enter string: ");
	gets(str);
	
	int i=strlen(str)-1;
	while(i >= 0)
	{
		putchar(str[i]);
		i--;
	}
}
