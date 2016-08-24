#include <stdio.h>

int main()
{
    int i;
    double S = 0, b;

    for(i = 1; i <= 100; i++){
        b = 1.0 / i;
        S = S + b;

    }
    printf("%0.2lf\n", S);

    return 0;
}
