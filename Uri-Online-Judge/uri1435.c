#include <stdio.h>

int main()
{
    int N, i, j, k, g, h, m = 1, p = 0, q = 0, r;

    while(1){
        scanf("%d", &N);

        if(N == 0){
            break;
        }
        else{
            m = 1, p = 0, q = 0;
            int mat[N][N];
            int a = N;
            if(N % 2 == 0){
                r = N / 2;
            }
            else if(N % 2 == 1){
                r = (N / 2) + 1;
            }
            for(i = 1; i <= r; i++){
                for(j = p; j < a; j++){
                    for(k = q; k < a; k++){
                        mat[j][k] = m;
                    }
                    m++;
                    p++;
                    q++;
                    a--;
                }
            }
            for(g = 0; g < N; g++){
                for(h = 0; h < N; h++){
                    if(h == 0){
                        printf("%3d", mat[g][h]);
                    }
                    else{
                        printf(" %3d", mat[g][h]);
                    }
                }
                printf("\n");
            }
            printf("\n");
        }
    }

    return 0;
}
