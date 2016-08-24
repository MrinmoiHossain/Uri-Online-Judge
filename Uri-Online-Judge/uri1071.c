#include <stdio.h>

int main()
{
    int X, Y, sum = 0, i;

    scanf("%d", &X);
    scanf("%d", &Y);

    if(X > Y){
        for(i = Y + 1; i < X; i++){
            if(i % 2 != 0){
                sum = sum + i;
            }
        }
    }
    else if(X < Y){
        for(i = X + 1; i < Y; i++){
            if(i % 2 != 0){
                sum = sum + i;
            }
        }
    }
    else if(X == Y){
        if(X % 2 != 0){
            sum = sum + X;
        }
    }
    printf("%d\n", sum);


    return 0;
}
