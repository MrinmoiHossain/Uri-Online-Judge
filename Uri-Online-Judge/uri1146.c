#include <stdio.h>

int main()
{
    int X, i, count = 0;


    while(1){
        scanf("%d", &X);
        if(X == 0){
        break;
        }
        else if(X > 0){
            for(i = 1; i <= X; i++){
                printf("%d", i);
                count++;
                if(count < X){
                    printf(" ");
                }
                else if(count == X){
                    printf("\n");
                }
            }
            count = 0;
        }
    }

    return 0;
}
