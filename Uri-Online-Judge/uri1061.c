#include <stdio.h>

int main()
{
    int start_day, end_day, start_hour, start_minute, start_second, end_hour, end_minute, end_second, W, X, Y, Z;
    int total_ini, total_fin, total_final;
    char date[4];

    scanf("%s %d", &date, &start_day);
    scanf("%d : %d : %d", &start_hour, &start_minute, &start_second);
    scanf("%s %d", &date, &end_day);
    scanf("%d : %d : %d", &end_hour, &end_minute, &end_second);

    total_ini = start_day * 86400 + start_hour * 3600 + start_minute * 60 + start_second;
    total_fin = end_day * 86400 + end_hour * 3600 + end_minute * 60 + end_second;
    total_final = total_fin - total_ini;

    W = total_final / 86400;
    X = (total_final % 86400) / 3600;
    Y = ((total_final % 86400) % 3600) / 60;
    Z = ((total_final % 86400) % 3600) % 60;


    printf("%d dia(s)\n", W);
    printf("%d hora(s)\n", X);
    printf("%d minuto(s)\n", Y);
    printf("%d segundo(s)\n", Z);


    return 0;
}
