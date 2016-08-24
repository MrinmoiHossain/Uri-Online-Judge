#include <stdio.h>

int main()
{
    double i, j;
    double S = 0, b;

    for(i = 1, j = 1; i <= 39; i = i + 2, j = j * 2){
        b = i / j;
        S = S + b;
    }
    printf("%0.2lf\n", S);

    return 0;
}
