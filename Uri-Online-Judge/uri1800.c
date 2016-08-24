#include <stdio.h>

int main()
{
    int Q, E, i, j, count = 0;;

    scanf("%d %d", &Q, &E);

    int Si, Ci;
    int V[E], N[Q];

    for(i = 0; i < E; i++){
        scanf("%d", &Si);
        V[i] = Si;
    }

    for(i = 0; i < Q; i++){
        scanf("%d", &Ci);
        N[i] = Ci;


        for(j = 0; j < E; j++){
            if(V[j] == Ci){
                count++;
            }
        }
        if(count > 1){
            printf("0\n");
            count = 0;
        }
        else{
            printf("1\n");
            count = 0;
        }

    }

    return 0;
}
