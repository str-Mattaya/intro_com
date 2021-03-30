#include <stdio.h>
#include <string.h>

int main()
{
    char x[100];
    int i, n;
    printf("Enter string: ");
    gets(x);
    printf("Change to uppercase\n");
    for(i=0; i<strlen(x);  i++)
        if(x[i]>='a' && x[i]<='z')
            x[i] = x[i]+('A'-'a');

    printf("\n%s\n", x);
    return 0;
}
