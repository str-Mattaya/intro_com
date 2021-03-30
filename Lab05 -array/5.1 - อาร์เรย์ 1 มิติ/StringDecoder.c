#include <stdio.h>
#include <string.h>

int main()
{
	char str[256];
	printf("Enter string: ");
	gets(str);
	
	int i=0;
	while(i < strlen(str))
	{
		putchar(str[i]);
		putchar('\n');
		i++;
	}
}
