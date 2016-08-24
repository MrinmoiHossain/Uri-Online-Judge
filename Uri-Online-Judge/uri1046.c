#include <stdio.h>

int main()
{
    int a, b, c, d;

    scanf("%d %d", &a, &b);

    if(a > b){
        c = 24 - a;
        d = c + b;
        printf("O JOGO DUROU %d HORA(S)\n", d);
    }
    else if(a < b){
        printf("O JOGO DUROU %d HORA(S)\n", b-a);
    }
    else if(a == b){
        printf("O JOGO DUROU 24 HORA(S)\n");
    }

    return 0;
}
