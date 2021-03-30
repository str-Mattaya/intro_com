#include <stdio.h>
#include <string.h>

int main()
{
    char str[256];
    printf("Enter message: "); gets(str);

    int word = 1;

    int i=1;
    while(i<strlen(str))
    {
        if(str[i] != ' ' && str[i-1] == ' ')
            word++;

        i++;
    }

    printf("\nWord count = %d", word);

    return 0;
}
