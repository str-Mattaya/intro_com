#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	int n; scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		char str[256];
		scanf("%s",str);
		//string //strings
		int m = strlen(str);
		int err = 0;
		if(m % 2 == 0)
			m/=2;
		else
			m = (m-1)/2;
		for(int j=0;j<m;j++)
		{
			if(str[j] != str[strlen(str)-j-1])
			{
				err = 1;
				break;
			}
		}
		if(err == 0)
			printf("\"%s\" is palindrome.\n\n", str);
		else
			printf("\"%s\" is not palindrome.\n\n", str);
	}
	system("pause");
	return 0;
}
