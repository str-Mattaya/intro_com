#include <stdio.h>
#include <string.h>

int main()
{
    char a[20], b[20];
    int cmp;
    printf("Enter 2 words: ");
    scanf("%s %s", a, b);
    cmp = strcmp(a, b);
    if(cmp > 0)
        printf("%s > %s\n", a, b);
    else if(cmp < 0)
        printf("%s < %s\n", a, b);
    else
        printf("%s = %s\n", a, b);
    return 0;
}
