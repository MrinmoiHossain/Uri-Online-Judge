#include <stdio.h>

int main()
{
    int X, Y, i;

    for(i = 0;X > Y || X < Y; i++){
        scanf("%d %d", &X, &Y);

        if(X > Y){
        printf("Decrescente\n");
        }
        else if(X < Y){
            printf("Crescente\n");
        }
        if(X == Y){
            break;
        }
    }



    return 0;
}
