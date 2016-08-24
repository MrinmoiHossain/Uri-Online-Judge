#include <stdio.h>

int main()
{
    int i = 1, j = 7, x = 0;

    for(i = 1; i <= 9; i = i + 2){
        for(j = (7 + x); j >= (5 + x); j--){
            printf("I=%d J=%d\n", i, j);
        }
    x = x + 2;
    }

    return 0;
}
