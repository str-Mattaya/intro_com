#include <stdio.h>
#include <string.h>

int main()
{
    char str[256];
    char findC, replaceC;

    printf("Enter string: "); gets(str);
    printf("Enter a character to search: "); scanf(" %c", &findC);
    printf("Enter a character to be replaced: "); scanf(" %c", &replaceC);

    int i=0;
    while(i<strlen(str))
    {
        if(str[i] == findC)
            str[i] = replaceC;

        i++;
    }
    printf("\nNew string: %s", str);

    return 0;
}
