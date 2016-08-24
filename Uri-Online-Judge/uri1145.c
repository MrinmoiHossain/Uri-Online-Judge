#include <stdio.h>

int main()
{
    int X, Y, i = 1, count = 0;

    scanf("%d %d", &X, &Y);

    if(X < Y){
        if(X > 1 && X < 20){
            if(Y < 100000){
                while(i <= Y){
                    printf("%d", i);
                    i++;
                    count++;
                    if(count < X){
                        printf(" ");
                    }
                    else if(count == X){
                        printf("\n");
                        count = 0;
                        }
                }
            }
        }
    }



    return 0;
}
