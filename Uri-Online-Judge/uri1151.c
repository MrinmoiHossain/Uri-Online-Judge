#include <stdio.h>

int main()
{
    int N, i, a = 0, b = 1, c;

    scanf("%d", &N);

    if(N > 0 && N < 46){
        if(N == 1){
        printf("%d", a);
        }
        else if(N == 2){
        printf("%d %d", a, b);
        }
        else if(N > 2){
            printf("%d %d ", a, b);
            for(i = 0; i <= N - 3; i++){
                c = a + b;
                a = b;
                b = c;
                printf("%d", c);
                if(i < N - 3){
                    printf(" ");
                }
                else if(i == N - 3){
                    printf("\n");
                }
            }
        }
    }



    return 0;
}
