#include <stdio.h>

int main()
{
    int X, Y, i, sum = 0;

    while(1){

        scanf("%d", &X);
        sum = 0;
        Y = X + 8;

        if(X == 0){
            break;
        }
        else if(X % 2 == 0){
            for(i = X; i <= Y; i++){
                if(i % 2 == 0){
                    sum = sum + i;
                }
            }
        }
        else if(X % 2 != 0){
            for(i = X + 1; i <= Y + 1; i++){
                if(i % 2 == 0){
                    sum = sum + i;
                }
            }
        }
        printf("%d\n", sum);
    }

    return 0;
}
