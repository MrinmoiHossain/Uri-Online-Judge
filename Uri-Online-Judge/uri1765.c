#include <stdio.h>

int main()
{
    int T, Q, i;
    double A, B;

    while(scanf("%d", &T) != 0){
        if(T == 0){
            break;
        }
        for(i = 1; i <= T; i++){
            scanf("%d %lf %lf", &Q, &A, &B);

            printf("Size #%d:\n", i);
            printf("Ice Cream Used: %0.2lf cm2\n", (((A + B) * 5.0) / 2) * Q);
        }
        printf("\n");
    }

    return 0;
}
