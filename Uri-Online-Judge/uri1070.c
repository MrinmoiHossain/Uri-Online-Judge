#include <stdio.h>

int main()
{
    int X, i;

    scanf("%d" ,&X);

    if(X % 2 == 0){
        for(i = X; i < X + 12; i++){
            if(i % 2 == 1){
                printf("%d\n", i);
            }
        }
    }
    if(X % 2 == 1){
        for(i = X; i < X + 11; i++){
            if(i % 2 == 1){
                printf("%d\n", i);
            }
        }
    }
    return 0;
}
