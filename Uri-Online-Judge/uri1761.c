#include <stdio.h>
#include <math.h>

#define PI 3.141592654

int main()
{
    double A, B, C, angle, distance, totalDistance;

    while(scanf("%lf %lf %lf", &A, &B, &C) != EOF){
        angle = tan(A * PI / 180.0);

        distance = B * angle;
        totalDistance = distance + C;

        printf("%0.2lf\n", totalDistance * 5);
    }
    return 0;
}
