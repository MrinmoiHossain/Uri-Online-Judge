#include <stdio.h>

int main()
{
    int N, F1, F2, i, b, first, second;

    scanf("%d", &N);

    for(i = 0; i < N; i++){
        scanf("%d %d", &F1, &F2);

        if(F2 > F1){
            first = F2;
            second = F1;
        }
        else{
            first = F1;
            second = F2;
        }

        while(first % second != 0){
            b = first % second;
            first = second;
            second = b;
        }
        printf("%d\n", second);
    }

    return 0;
}
