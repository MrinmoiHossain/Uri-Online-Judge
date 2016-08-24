#include <stdio.h>

int main()
{
    double r = 3.14159;
    double R, A;

    scanf("%lf", &R);

    A = r * R * R;

    printf("A=%0.4lf\n", A);

    return 0;
}
