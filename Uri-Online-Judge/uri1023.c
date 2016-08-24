#include <stdio.h>

int main()
{
    int N, X, Y, i, serial = 1, sumX, sumY, j;
    int total1, total2, diff;

    while(scanf("%d", &N) != 0){
        sumX = 0, sumY = 0;
        int Resident[210] = {0};

        if(N == 0){
            break;
        }
        for(i = 0; i < N; i++){
            scanf("%d %d", &X, &Y);


            sumX = sumX + X;
            sumY = sumY + Y;


            Resident[Y/X] += X;
        }

        printf("Cidade# %d:\n", serial);
        serial++;
        j = 0;

        for(i = 0; i < 210; i++){
            if(Resident[i] > 0){
                if (j > 0){
                    printf(" ");
                }
                j++;
                printf("%d-%d", Resident[i], i);
            }
        }
        printf("\n");

        total1 = (double)sumY / (double)sumX * 100;
        total2 = (double)sumY / (double)sumX;
        total2 = total2 * 100;
        diff = total1 - total2;
        total1 = total1 / 100;

        printf("Consumo medio: %d.%02d m3.\n", total1, diff);
    }

    return 0;
}
