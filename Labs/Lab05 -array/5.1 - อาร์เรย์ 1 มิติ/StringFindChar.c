#include <stdio.h>
#include <string.h>

int main()
{
	char str[256] = "";
	printf("Enter string: ");
	gets(str);
	
	int i=0;
	while(i<strlen(str))
	{
		if(str[i] == 'a')
		{
			printf("\nGood :)");
			return 0;
		}
		i++;
	}
	
	printf("\nNot Good :(");
	
	return 0;
}
