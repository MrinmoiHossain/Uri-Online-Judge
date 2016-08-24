#include <stdio.h>

int main()
{
    double X, N[100];
    int i;

    scanf("%lf", &X);


    for(i = 0; i < 100; i++){
        printf("N[%d] = %0.4lf\n", i, X);
        X = X / 2;
    }

    return 0;
}
