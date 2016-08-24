#include <stdio.h>

int main()
{
    int A, N, i, count = 0;


    scanf("%d %d", &A, &N);

    while(N <= 0){
        scanf("%d", &N);
    }


    for(i = A; i < A + N; i++){
        count = count + i;
    }
    printf("%d\n", count);

    return 0;
}
