#include <stdio.h>

int main()
{

    int L, i, cont1 = 0, cont2 = 0, cont3 = 0;

    while(scanf("%d", &L) != EOF){
        for (i = 0; i < L; i++){
                int V[i];
            scanf("%d", &V[i]);

            if(V[i] < 10)
                cont1++;
            if(V[i] >= 10 && V[i] < 20)
                cont2++;
            if(V[i] >= 20)
                cont3++;
        }
        if(cont3 != 0){
            printf("3\n");
        }
        else if(cont2 != 0){
            printf("2\n");
        }
        else{
            printf("1\n");
        }
        cont1 = 0;
        cont2 = 0;
        cont3 = 0;
    }


return 0;
}
