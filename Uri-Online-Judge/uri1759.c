#include <stdio.h>

int main()
{
    int N, i;

    scanf("%d", &N);

    for(i = 1; i <= N ; i++){
        printf("Ho");
        if(i < N){
            printf(" ");
        }
        if(i == N){
            printf("!");
        }
    }
    printf("\n");

    return 0;
}
