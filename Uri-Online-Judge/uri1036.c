#include <stdio.h>
#include <math.h>

int main()
{
    double A, B, C, x, r1, r2;

    scanf("%lf %lf %lf", &A, &B, &C);

    x = pow(B, 2) - 4 * A * C;

    if(x > 0 && A != 0){
        r1 = (-B + sqrt(x)) / (2 * A);
        r2 = (-B - sqrt(x)) / (2 * A);

        printf("R1 = %0.5lf", r1);
        printf("\n");
        printf("R2 = %0.5lf", r2);
        printf("\n");
    }
    else{
        printf("Impossivel calcular");
        printf("\n");
    }

    return 0;
}
