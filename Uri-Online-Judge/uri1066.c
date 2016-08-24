#include <stdio.h>

int main()
{
    int ara[5];
    int i, count = 0, count1 = 0, count2 = 0, count3 = 0;

    for(i = 0; i < 5; i++){
        scanf("%d", &ara[i]);
    }

    for(i = 0; i < 5; i++){
        if(ara[i] % 2 == 0){
            count++;
        }
        if(ara[i] % 2 != 0){
            count1++;
        }
        if(ara[i] > 0){
            count2++;
        }
        if(ara[i] < 0){
            count3++;
        }
    }
    printf("%d valor(es) par(es)\n", count);
    printf("%d valor(es) impar(es)\n", count1);
    printf("%d valor(es) positivo(s)\n", count2);
    printf("%d valor(es) negativo(s)\n", count3);

    return 0;
}
