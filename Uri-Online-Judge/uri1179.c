#include <stdio.h>

int main()
{
    int a, i, j = 0, k = 0, b;

    int par[5];
    int impar[5];

    for(i = 0; i < 15; i++){
        scanf("%d", &a);

        if(a % 2 == 0){
            par[j] = a;
            j++;
        }
        else{
            impar[k] = a;
            k++;
        }
        if(j == 5){
            b = 0;
            while(b != 5){
                printf("par[%d] = %d\n", b, par[b]);
                b++;
                j = 0;
            }
        }
        if(k == 5){
            b = 0;
            while(b != 5){
                printf("impar[%d] = %d\n", b, impar[b]);
                b++;
                k = 0;
            }
        }
        if(i == 14){
            b = 0;
            while(b < k){
                printf("impar[%d] = %d\n", b, impar[b]);
                b++;
            }
            b = 0;
            while(b < j){
                printf("par[%d] = %d\n", b, par[b]);
                b++;
            }
        }
    }

    return 0;
}
