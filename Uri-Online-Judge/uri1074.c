#include <stdio.h>

int main()
{
    int N, X, i;

    scanf("%d", &N);

    for(i = 0; i < N; i++){
        scanf("%d", &X);
        if(X == 0){
            printf("NULL\n");
        }
        else if(X < 0 && X % 2 != 0){
            printf("ODD NEGATIVE\n");
        }
        else if(X > 0 && X % 2 != 0){
            printf("ODD POSITIVE\n");
        }
        else if(X < 0 && X % 2 == 0){
            printf("EVEN NEGATIVE\n");
        }
        else if(X > 0 && X % 2 == 0){
            printf("EVEN POSITIVE\n");
        }
    }

    return 0;
}
