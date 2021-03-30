#include <stdio.h>
#include <string.h>

int main()
{
    char a[20];
    int n=0;
    printf("Enter words until END\n");
    scanf("%s", a);
    while( strcmp(a, "END") != 0 )
    {
        n++;  //count number of words
        scanf("%s", a);
    }
    printf("word count = %d\n", n);
    return 0;
}
