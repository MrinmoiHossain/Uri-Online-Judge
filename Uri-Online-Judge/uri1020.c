#include <stdio.h>

int main()
{
    int ages, years, months, days, a;

    scanf("%d", &ages);

    years = ages / 365;

    a = ages - years * 365;
    months = a / 30;

    days = a - months * 30;

    printf("%d ano(s)\n", years);
    printf("%d mes(es)\n", months);
    printf("%d dia(s)\n", days);

    return 0;
}
