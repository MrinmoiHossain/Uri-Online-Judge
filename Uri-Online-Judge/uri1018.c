#include <stdio.h>

int main()
{
    int N;
    int a = 100, b = 50, c = 20, d = 10, e = 5, f = 2, g = 1;
    int p, q, r, s, t, y, z, a1, a2, a3, a4, a5, a6;

    scanf("%d", &N);

    p = N / a;

    a1 = N - p * 100;
    q = a1 / b;

    a2 = a1 - q * b;
    r = a2 / c;

    a3 = a2 - r * c;
    s = a3 / d;

    a4 = a3 - s * d;
    t = a4 / e;

    a5 = a4 - t * e;
    y = a5 / f;

    a6 = a5 - y * f;
    z = a6 / g;

    printf("%d\n", N);
    printf("%d nota(s) de R$ 100,00\n", p);
    printf("%d nota(s) de R$ 50,00\n", q);
    printf("%d nota(s) de R$ 20,00\n", r);
    printf("%d nota(s) de R$ 10,00\n", s);
    printf("%d nota(s) de R$ 5,00\n", t);
    printf("%d nota(s) de R$ 2,00\n", y);
    printf("%d nota(s) de R$ 1,00\n", z);

    return 0;
}
