#include <stdio.h>

int main()
{
    int N, i;
    double a, b, c, z;

    scanf("%d", &N);

    for(i = 0; i < N; i++){
        scanf("%lf %lf %lf", &a, &b, &c);
        z = (2 * a + 3 * b + 5 * c) / 10;
        printf("%0.1lf\n", z);
    }

    return 0;
}
