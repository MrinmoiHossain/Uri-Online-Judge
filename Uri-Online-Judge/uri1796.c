#include <stdio.h>

int main()
{
    int Q, i, V, m = 0;
    double p;

    scanf("%d", &Q);

    for(i = 0; i < Q; i++){
        scanf("%d", &V);
        m += V;
    }
    if(Q % 2 == 0){
        p = Q / 2.0;
    }
    if(Q % 2 != 0){
        Q = Q + 1;
        p = Q / 2.0;
    }


    if(m >= (int)p){
        printf("N\n");
    }
    else{
        printf("Y\n");
    }

    return 0;
}
