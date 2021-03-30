#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main()
{
    char str[21];
    printf("Enter string: "); gets(str);

    int i=0;
    while(i<strlen(str))
    {
        str[i] = toupper(str[i]);
        i++;
    }

    printf("\nNew string: %s", str);

    return 0;
}
