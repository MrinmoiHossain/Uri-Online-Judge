#include <stdio.h>

int main()
{
    int X, Y, i, sum = 0;

    scanf("%d", &X);
    scanf("%d", &Y);

    if(X < Y){
        for (i = X; i <= Y; i++) {
            if (i % 13 != 0) {
                sum = sum + i;
            }
        }
        printf("%d\n", sum);
    }
    else if(X > Y){
        for (i = Y; i <= X; i++) {
            if (i % 13 != 0) {
                sum = sum + i;
            }
        }
        printf("%d\n", sum);
    }
    else if(X == Y){
        for (i = X; i <= Y; i++) {
            if (i % 13 != 0) {
                sum = sum + i;
            }
        }
        printf("%d\n", sum);
    }


    return 0;
}
