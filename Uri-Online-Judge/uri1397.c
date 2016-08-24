#include <stdio.h>

int main()
{
    int N, A, B, countA, countB, i;

    while(scanf("%d", &N) != 0){
        countA = 0;
        countB = 0;

        if(N == 0){
            break;
        }
        else{
            for(i = 0; i < N; i++){
                scanf("%d %d", &A, &B);

                if(A > B){
                    countA++;
                }
                if(A < B){
                    countB++;
                }
            }
            printf("%d %d\n", countA, countB);
        }
    }

    return 0;
}
