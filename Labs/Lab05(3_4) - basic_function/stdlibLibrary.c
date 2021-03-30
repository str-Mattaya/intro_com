#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main ()
{
    int n;
    float f;
    char str[20];
    strcpy(str, "-0123.425");
    n = atoi(str);
    f = atof(str);
    printf("string \"%s\"\n", str);
    printf("int value = %d\n", n);
    printf("absolute = %d\n", abs(n) );
    printf("float value = %.4f\n", f);
    strcpy(str, "15xxx");
    n = atoi(str);
    f = atof(str);
    printf("string \"%s\"\n", str);
    printf("int value = %d\n", n);
    printf("float value = %.4f\n", f);
    return 0;
}
