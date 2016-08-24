#include <stdio.h>

int main()
{
    int N, i, L, j, k;
    int count, aux;
    int carriages[50];

    scanf("%d", &N);

    for(i = 0; i < N; i++){
        scanf("%d", &L);
        count = 0;

        for(j = 0; j < L; j++){
            scanf("%d", &carriages[j]);
        }

        for(j = 0; j < L; j++){
            for(k = j + 1; k < L; k++){
                if(carriages[j] > carriages[k]){
                    aux = carriages[j];
                    carriages[j] = carriages[k];
                    carriages[k] = aux;
                    count++;
                }
            }
        }
        printf("Optimal train swapping takes %d swaps.\n", count);
    }

    return 0;
}
