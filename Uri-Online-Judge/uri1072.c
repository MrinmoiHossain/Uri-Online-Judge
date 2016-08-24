#include <stdio.h>

int main()
{
    int N, X, i, count1 = 0, count2 = 0;

    scanf("%d", &N);

    for(i = 0; i < N; i++){
        scanf("%d", &X);
        if(X >= 0 && X <= 20){
            count1++;
        }
        else{
            count2++;
        }
    }
    printf("%d in\n", count1);
    printf("%d out\n", count2);

    return 0;
}
