#include <stdio.h>

int main()
{
    double N, d[] = {100.0, 50.0, 20.0, 10.0, 5.0, 2.0, 1.0, 0.5, 0.25, 0.10, 0.05, 0.01};
    int i = 0, a = 0;

    scanf("%lf", &N);

    printf("NOTAS:\n");
    N = N + 1e-9;

    for(d[i]; d[i] >= 0.01; i++){
        a = 0;
        for(N; N >= d[i]; ){
            N = N - d[i];
            a++;
        }
        if(d[i] >= 2.00){
            printf("%d nota(s) de R$ %0.2lf\n", a, d[i]);
        }
        else if(d[i] == 1.00){
            printf("MOEDAS:\n");
            printf("%d moeda(s) de R$ %0.2lf\n", a, d[i]);
        }
        else{
           printf("%d moeda(s) de R$ %0.2lf\n", a, d[i]);
        }
    }

    return 0;
}
