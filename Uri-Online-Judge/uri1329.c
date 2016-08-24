#include <stdio.h>

int main()
{
    int N, i, R, cont1 = 0, cont2 = 0;

    while(scanf("%d", &N) != 0){
            cont1 = 0, cont2 = 0;
        if(N == 0){
            break;
        }
        for(i = 0; i < N; i++){
            scanf("%d", &R);

            if(R == 0){
                cont1++;
            }
            else if(R == 1){
                cont2++;
            }
        }
        printf("Mary won %d times and John won %d times\n", cont1, cont2);

    }



    return 0;
}
