#include <stdio.h>
#include <math.h>

#define PI 3.1415926535897

int main()
{
    double a, b, c, p, A, cp, cg, v, g, r;

    while(scanf("%lf %lf %lf", &a, &b, &c) != EOF){
        p = (a + b + c) / 2.0;
        A = sqrt(p * (p - a) * (p - b) * (p - c));

        cp = pow(A/p, 2) * PI;
        cg = pow((a * b * c) / (4 * A), 2) * PI;

        v = A - cp;
        g = cg - A;
        r = cp;

        printf("%0.4lf %0.4lf %0.4lf\n", g, v, r);
    }

    return 0;
}
