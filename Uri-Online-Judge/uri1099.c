#include <stdio.h>

int main()
{
    int N, X, Y, j = 0, i, sum = 0;

    scanf("%d", &N);

    for(j = 0; j < N; j++){

        scanf("%d %d", &X, &Y);
        sum = 0;

            if(X > Y){
                for(i = Y + 1; i < X; i++){
                    if(i % 2 != 0){
                        sum = sum + i;
                    }
                }
            }
            else if(X < Y){
                for(i = X + 1; i < Y; i++){
                    if(i % 2 != 0){
                        sum = sum + i;
                    }
                }
            }
            else if(X == Y){
                    sum = 0;
            }
        printf("%d\n", sum);
    }

    return 0;
}
