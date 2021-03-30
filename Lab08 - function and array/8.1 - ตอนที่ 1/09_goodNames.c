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
    int i; int result = 0;
    char str[15];
    for(i=1;i<=5;i++)
    {
        printf("Enter name #%d: ", i); gets(str);
        if(isGoodName(str))
            result++;
    }

    if(result == 5)
        printf("\nGood List");
    else
        printf("\nBad List");

    return 0;
}
