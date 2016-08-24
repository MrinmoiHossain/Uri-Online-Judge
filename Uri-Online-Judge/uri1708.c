#include <stdio.h>

int main()
{
    int X, Y, intial, fina, count;

    scanf("%d %d", &X, &Y);
    intial = 0;
    fina = 0;
    count = 1;

    while(1){
        if((fina - intial) >= X){
            break;
        }
        count++;
        intial += X;
        fina += Y;
    }

    printf("%d\n", count);

    return 0;
}
