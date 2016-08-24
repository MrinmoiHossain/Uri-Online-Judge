#include <stdio.h>

int main()
{
    int Q, D, P, page;

    while(scanf("%d", &Q) != 0){
        if(Q == 0){
            break;
        }
        scanf("%d %d", &D, &P);
        page = (Q * D * P) / (P - Q);

        if(page > 1){
            printf("%d paginas\n", page);
        }
        else{
            printf("%d pagina\n", page);
        }
    }

    return 0;
}
