#include <stdio.h>

int main()
{
    int L, R, c;

    while(scanf("%d %d", &L, &R) != 0){
        if(L == 0 && R == 0){
            break;
        }
        else{
            c = L + R;
            printf("%d\n", c);

        }
    }



    return 0;
}

