#include <stdio.h>
#include <string.h>

int isGoodName(char str[15])
{
    int i;
    for(i=0;i<strlen(str);i++)
    {
        if(str[i] == 'a')
            return 1;
    }
    return 0;
}

int main()
{
    char str[15];
    printf("Enter your name: "); gets(str);
    printf("\nReturn Value = %d", isGoodName(str));

    return 0;
}
