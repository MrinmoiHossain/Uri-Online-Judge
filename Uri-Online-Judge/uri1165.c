#include <stdio.h>

int main()
{
    int N, i, X, j;

    scanf("%d", &N);

    for(i = 0; i < N; i++){
        scanf("%d", &X);
        int total = 0;

        for(j = 1; j <= X; j++){
            if(X % j == 0){
                total++;
            }
        }
        if(total == 2){
            printf("%d eh primo\n", X);
        }
        else{
           printf("%d nao eh primo\n", X);
        }

    }

    return 0;
}
