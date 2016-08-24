#include <stdio.h>

int main()
{
    double ara[6], total = 0, average;
    int i, count = 0;

    for(i = 0; i < 6; i++){
        scanf("%lf", &ara[i]);
    }

    for(i = 0; i < 6; i++){
        if(ara[i] > 0){
            count++;
            total = total + ara[i];
            average = total / count;
        }
    }
    printf("%d valores positivos\n", count);
    printf("%0.1lf\n", average);

    return 0;
}
