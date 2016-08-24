#include <stdio.h>

int main()
{
    int C, N, i, j, sum = 0, count = 0, avg;
    double result;

    scanf("%d", &C);

    for(i = 0; i < C; i++){
        scanf("%d", &N);
        sum = 0;
        count = 0;
        int grade[N];
        for(j = 0; j < N; j++){
            scanf("%d", &grade[j]);

            sum = sum + grade[j];
            avg = sum / N;
        }
        for(j = 0; j < N; j++){
            if(grade[j] > avg){
                count++;
            }
        }

        result = (count * 100.0) / N;

        printf("%0.3lf%%\n", result);
    }

    return 0;
}
