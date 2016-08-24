#include <stdio.h>

int main()
{
    int X, Z, i, count = 1;


    scanf("%d", &X);
    scanf("%d", &Z);

    while(1){
        scanf("%d", &Z);
        if(Z > X){
            break;
        }
    }


    for(i = X; X <= Z; i++){
        X = X + i;
        count++;
    }

    printf("%d\n", count);

    return 0;
}
