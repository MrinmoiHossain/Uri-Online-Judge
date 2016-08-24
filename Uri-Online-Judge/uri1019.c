#include <stdio.h>

int main()
{
    int N;
    int hours, minutes, seconds, a;

    scanf("%d", &N);

    hours = N / 3600;

    a = N - hours * 3600;
    minutes = a / 60;

    seconds = a - minutes * 60;

    printf("%d:%d:%d\n", hours, minutes, seconds);

    return 0;
}
