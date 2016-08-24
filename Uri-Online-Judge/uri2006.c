#include <stdio.h>

int main()
{
    int T, A, B, C, D, E, cont = 0;

    scanf("%d", &T);
    scanf("%d %d %d %d %d", &A, &B, &C, &D, &E);

    if(T == A){
        cont++;
    }
    if(T == B){
        cont++;
    }
    if(T == C){
        cont++;
    }
    if(T == D){
        cont++;
    }
    if(T == E){
        cont++;
    }

    printf("%d\n", cont);

    return 0;
}
