#include <stdio.h>
#include <math.h>

int main()
{
    float x = 5.0;
    int a = 2;
    printf("PI =  %.15lf\n", M_PI);
    printf("sqrt(2) = %.5f\n", sqrt(a) );
    printf("5^2 = %.5f\n", pow(x,a) );
    printf("e^2 = %.5f\n", exp(a) );
    printf("ln(5) = %.5f\n", log(x) );
    printf("log10(5) = %.5f\n", log10(x) );
    printf("sin(PI/4)+cos(PI/4) = %.5f\n", sin(M_PI/4)+cos(M_PI/4));
    return 0;
}
