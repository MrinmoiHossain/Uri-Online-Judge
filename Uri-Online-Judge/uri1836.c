#include <stdio.h>
#include <math.h>

int main()
{
    int T, i, L, BS, IV, EV;
    double HP, S;
    char P[101];

    scanf("%d", &T);

    for(i = 1; i <= T; i++){
        scanf("%s %d", &P, &L);

        printf("Caso #%d: %s nivel %d\n", i, P, L);

        scanf("%d %d %d", &BS, &IV, &EV);

        HP = (((IV + BS+ (sqrt(EV) / 8) + 50) * L) / 50) + 10;

        printf("HP: %d\n", (int)HP);

        scanf("%d %d %d", &BS, &IV, &EV);

        S = (((IV + BS+ (sqrt(EV) / 8)) * L) / 50) + 5;

        printf("AT: %d\n", (int)S);

        scanf("%d %d %d", &BS, &IV, &EV);

        S = (((IV + BS+ (sqrt(EV) / 8)) * L) / 50) + 5;

        printf("DF: %d\n", (int)S);

        scanf("%d %d %d", &BS, &IV, &EV);

        S = (((IV + BS+ (sqrt(EV) / 8)) * L) / 50) + 5;

        printf("SP: %d\n", (int)S);
    }

    return 0;
}
