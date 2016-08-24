#include <stdio.h>

int main()
{
    int A, B, i, X, Y, count1, count2;
    int alice[100001];
    int beatriz[100001];

    while(scanf("%d %d", &A, &B) != 0){
        count1 = 0;
        count2 = 0;

        if(A == 0 && B == 0){
            break;
        }

        for(i = 0; i < A; i++){
            scanf("%d", &X);
            alice[X]++;
        }
        for(i = 0; i < B; i++){
            scanf("%d", &Y);
            beatriz[Y]++;
        }

        for(i = 0; i < 100001; i++){
            if(alice[i] != 0 && beatriz[i] == 0){
                count1++;
            }
            if(alice[i] == 0 && beatriz[i] != 0){
                count2++;
            }
        }

        if(count1 < count2){
            printf("%d\n", count1);
        }
        else{
            printf("%d\n", count2);
        }
    }

    return 0;
}
