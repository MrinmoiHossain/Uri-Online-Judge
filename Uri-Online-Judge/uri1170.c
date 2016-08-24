#include <stdio.h>

int main()
{
    int N, i, cont;
    float X;

    scanf("%d", &N);

    for(i = 0; i < N; i++){
        scanf("%f", &X);
        cont = 0;

        while(X > 1){
            X = X /2;
            cont++;
        }
     printf("%d dias\n", cont);
    }


    return 0;
}
