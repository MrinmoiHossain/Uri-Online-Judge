#include <stdio.h>

int main()
{
    int T, R1, R2, i, a;

    scanf("%d", &T);

    if(T <= 1000){
        for(i = 0; i < T; i++){
            scanf("%d %d", &R1, &R2);

            a = R1 + R2;
            printf("%d\n", a);
        }
    }

    return 0;
}
