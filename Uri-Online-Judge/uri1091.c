#include <stdio.h>

int main()
{
    int K, N, M, X, Y, i;

    while(scanf("%d", &K) != 0){
        if(K == 0){
            break;
        }
        scanf("%d %d", &N, &M);
        for(i = 0; i < K; i++){
            scanf("%d %d", &X, &Y);

            if((X == N || X == M) || (Y == N || Y == M)){
                printf("divisa\n");
            }
            else{
                if(X > N && Y > M){
                    printf("NE\n");
                }
                else if(X > N && Y < M){
                    printf("SE\n");
                }
                else if(X < N && Y > M){
                    printf("NO\n");
                }
                else{
                    printf("SO\n");
                }
            }
        }
    }

    return 0;
}
