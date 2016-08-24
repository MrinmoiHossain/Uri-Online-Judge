#include <stdio.h>

int main()
{
    int N, LA, LB, SA, SB, i, j, count1, count2;

    scanf("%d", &N);
    scanf("%d %d", &LA, &LB);
    scanf("%d %d", &SA, &SB);

    count1 = 0;
    count2 = 0;

    for(i = LA; i <= LB; i++){
        if(i == N){
            count1++;
        }
    }
    for(j = SA; j <= SB; j++){
        if(j == N){
            count2++;
        }
    }

    if(count1 > 0 && count2 > 0){
        printf("possivel\n");
    }
    else{
        printf("impossivel\n");
    }

    return 0;
}
