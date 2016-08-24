#include <stdio.h>

int main()
{
    double A, B, C, area, perimetro;

    scanf("%lf %lf %lf", &A, &B, &C);

    if((B-C) < A && A <(B+C) && (A-C) < B && B <(A+C) &&(A-B) < C && C <(A+B)){
            perimetro = A+B+C;
            printf("Perimetro = %.1lf\n",perimetro);
    }
    else{
        area= ((A+B)*C)/2;
        printf("Area = %.1lf\n",area);
    }

    return 0;
}
