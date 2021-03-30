#include <stdio.h>
#include <string.h>

int main()
{
    char a[20]="Hello World", b[20]="Banana";
    printf("a = %s\n", a);
    printf("strlen(a) = %d\n", strlen(a) );
    printf("b = %s\n", b);
    printf("strlen(b) = %d\n", strlen(b) );
    strcpy(a, "Apple");  // a = “Apple"
    printf("new a = %s\n", a);
    strcat(a, b);   // a = a+b
    printf("a+b => %s\n", a);

    return 0;
}
