#include <stdio.h>

int main()
{
    double A, B, C;
    double pi = 3.14159;
    double area_rectangled1, area_radius, area_trapezium, area_square, area_rectangled2;

    scanf("%lf %lf %lf", &A, &B, &C);

    area_rectangled1 = (A * C) / 2;
    area_radius = pi * (C * C);
    area_trapezium = 0.5 * (A + B) * C;
    area_square = B * B;
    area_rectangled2 = A * B;

    printf("TRIANGULO: %0.3lf\n", area_rectangled1);
    printf("CIRCULO: %0.3lf\n", area_radius);
    printf("TRAPEZIO: %0.3lf\n", area_trapezium);
    printf("QUADRADO: %0.3lf\n", area_square);
    printf("RETANGULO: %0.3lf\n", area_rectangled2);

    return 0;
}
