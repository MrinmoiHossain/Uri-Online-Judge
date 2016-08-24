#include <stdio.h>

int main()
{
    int N, i, T;

    scanf("%d", &N);

    for(i = 0; i < N; i++){
        scanf("%d", &T);

        if(T >= 2015){
            T = T - 2015 + 1;
            printf("%d A.C.\n", T);
        }
        else if(T < 2015){
            T = 2015 - T;
            printf("%d D.C.\n", T);
        }
    }

    return 0;
}
