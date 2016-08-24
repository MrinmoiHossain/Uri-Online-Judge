#include <stdio.h>

int main()
{
    int n, i, l;
    int N[1000];
    double inteira, real, total;
    double valorMaior, valorMenor;

    while(scanf("%d", &n) != 0){
        if(n == 0){
            break;
        }
        total = 0;

        for(i = 0; i < n; i++){
            scanf("%lf %lf", &inteira, &real);
            N[i] = inteira * 100 + real;
            total = total + N[i];
        }

        total = ((double) total) / n;
        valorMenor = 0;
        valorMaior = 0;

        for(l = 0; l < n; l++){
            if(N[l] < total){
                valorMenor += ((int)(total - N[l]))/100.0;
            }
            else{
                valorMaior += ((int)(N[l] - total))/100.0;
            }
        }
            printf("$%.2f\n",valorMenor);
            printf("$%.2f\n",valorMaior);
        if(valorMenor > valorMaior){
                printf("$%.2f\n",valorMenor);
        }
        else{
            printf("$%.2f\n",valorMaior);
        }
    }
}
