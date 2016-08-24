#include <stdio.h>

int main()
{
    int X1, X2, X3, X4, X5;
    int Y1, Y2, Y3, Y4, Y5;

    scanf("%d %d %d %d %d", &X1, &X2, &X3, &X4, &X5);
    scanf("%d %d %d %d %d", &Y1, &Y2, &Y3, &Y4, &Y5);

    if(X1 == Y1 || X2 == Y2 || X3 == Y3 || X4 == Y4 || X5 == Y5){
        printf("N\n");
    }
    else{
        printf("Y\n");
    }

    return 0;
}
