#include <stdio.h>
#include <math.h>

int main()
{
    int N, i, X, j;

    scanf("%d", &N);

    for(i = 0; i < N; i++){
        scanf("%d", &X);
        int total = 0;

        if(X == 2){
            printf("Prime\n");
        }
        else{
            if(X % 2 == 0){
               printf("Not Prime\n");
            }
            else{
                for(j = 3; j <= sqrt(X); j += 2){
                    if(X % j == 0){
                        total++;
                    }
                }
                if(total >= 1){
                    printf("Not Prime\n");
                }
                else{
                    printf("Prime\n");
                }
            }
        }
    }

    return 0;
}

