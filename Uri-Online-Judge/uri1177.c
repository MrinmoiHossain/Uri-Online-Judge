#include <stdio.h>

int main()
{
    int N[1000], i = 0, T, x = 0;

    scanf("%d", &T);

    if(T >= 2 && T <= 50){
        while(i < 1000){
            for(x = 0; x < T; x++){
                printf("N[%d] = %d\n", i, x);
                i++;
                if(i == 1000){
                    break;
                }

            }
        }
    }

    return 0;
}
