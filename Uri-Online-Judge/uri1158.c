#include <stdio.h>

int main()
{
    int N, X, Y, j = 0, i, sum = 0, Z;

    scanf("%d", &N);

    for(j = 0; j < N; j++){

        scanf("%d %d", &X, &Y);
        sum = 0;

        Z = (Y * 2 - 1) + X;

            if(X % 2 != 0){
                for(i = X; i < Z; i++){
                    if(i % 2 ){
                        sum = sum + i;
                    }
                }
            }
            else if(X % 2 == 0){
                for(i = X + 1; i <= Z; i++){
                    if(i % 2 != 0){
                        sum = sum + i;
                    }
                }
            }
        printf("%d\n", sum);
    }

    return 0;
}

