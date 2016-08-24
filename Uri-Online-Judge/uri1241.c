#include <stdio.h>
#include <string.h>

int main()
{
    int N, i, count, j, k;
    char A[1001], B[1001];

    scanf("%d", &N);

    for(i = 0; i < N; i++){
        count = 0;
        scanf("%s %s", &A, &B);

        for(j = strlen(B), k = strlen(A); j >= 0; j--, k--){
            if(B[j] == A[k]){
                count++;
            }
        }

        if(count == strlen(B) + 1){
            printf("encaixa\n");
        }
        else{
            printf("nao encaixa\n");
        }
    }

    return 0;
}
