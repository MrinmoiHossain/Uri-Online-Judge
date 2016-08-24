#include <stdio.h>

int main()
{
    int X;
    double Y, average_consumption;

    scanf("%d", &X);
    scanf("%lf", &Y);

    average_consumption = X / Y;

    printf("%0.3lf km/l\n", average_consumption);

    return 0;
}
