#include <stdio.h>

int main()
{
    int N, i, lit, pos;

    scanf("%d", &N);

    if(N > 1 && N < 1000){
            int X[N];

        for(i = 0; i < N; i++){
            scanf("%d", &X[i]);

            if(i == 0){
                lit = X[i];
                pos = 0;
            }

             if(X[i] < lit){
                lit = X[i];
                pos = i;
             }

        }

    }
    printf("Menor valor: %d\n", lit);
    printf("Posicao: %d\n", pos);


    return 0;
}
