#include <stdio.h>

int main()
{
    int R1, X1, Y1, R2, X2, Y2, x, y, r;

    while(scanf("%d %d %d %d %d %d", &R1, &X1, &Y1, &R2, &X2, &Y2) != EOF){
            x = X1 - X2;
            y = Y1 - Y2;
            r = R1 - R2;
        if(x * x + y * y <= r * r){
            if(X1 == X2 && Y1 == Y2){
                printf("MORTO\n");
            }
            else if(R2 > R1){
               printf("MORTO\n");
            }
            else{
                printf("RICO\n");
            }
        }
        else{
            printf("MORTO\n");
        }
    }

    return 0;
}
