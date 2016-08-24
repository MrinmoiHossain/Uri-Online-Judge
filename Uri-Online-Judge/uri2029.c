#include <stdio.h>

#define pi 3.14

int main()
{
    double V, D, radius, area, height;

    while(scanf("%lf %lf", &V, &D) != EOF){
        radius = D / 2;
        area = pi * radius * radius;
        height = V / area;

        printf("ALTURA = %0.2lf\n", height);
        printf("AREA = %0.2lf\n", area);
    }

    return 0;
}


