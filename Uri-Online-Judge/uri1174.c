#include <stdio.h>

int main()
{
    double x[100];
    int i;

    for(i = 0; i <100; i++){
            scanf("%lf", &x[i]);
    }
    for(i = 0; i < 100; i++){
            if(x[i] <= 10){
                printf("A[%d] = %0.1lf\n", i, x[i]);
            }
    }


    return 0;
}
