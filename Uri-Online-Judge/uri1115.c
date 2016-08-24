#include <stdio.h>

int main()
{
    int X, Y, i;

    for(i = 0; X > 0 || Y > 0 || X < 0 || Y < 0; i++){
        scanf("%d %d", &X, &Y);

        if(X > 0 && Y > 0){
            printf("primeiro\n");
        }
        else if(X < 0 && Y > 0){
            printf("segundo\n");
        }
        else if(X < 0 && Y < 0){
            printf("terceiro\n");
        }
        else if(X > 0 && Y < 0){
            printf("quarto\n");
        }
        else if(X == 0 || Y == 0){
            break;
        }
    }

    return 0;
}
