#include <stdio.h>

int main()
{
    int P, N, i, cont = 0, diff;

    scanf("%d %d", &P, &N);

    int heights[N];

    for(i = 0; i < N; i++){
        scanf("%d", &heights[i]);

        if(heights[i] > heights[i-1]){
            diff = heights[i] - heights[i-1];
        }
        else{
            diff = heights[i-1] - heights[i];
        }

        if(diff <= P){
            cont++;
        }
    }
    if(cont == N - 1){
        printf("YOU WIN\n");
    }
    else{
        printf("GAME OVER\n");
    }

    return 0;
}
