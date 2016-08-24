#include <stdio.h>

int main()
{
    int spent_time, average_speed;
    double distance, liters;

    scanf("%d", &spent_time);
    scanf("%d", &average_speed);

    distance = spent_time * average_speed;
    liters = distance / 12;

    printf("%0.3lf\n", liters);

    return 0;
}
