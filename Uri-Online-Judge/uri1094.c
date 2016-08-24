#include <stdio.h>

int main()
{
    int N, Amount = 0, i, rabbit = 0, rat = 0, frog = 0;
    double per_rabbit, per_rat, per_frog;
    char Type;

    scanf("%d", &N);

    for(i = 0; i < N; i++){
        scanf("%d %c", &Amount, &Type);


        if(Amount >= 1 && Amount <= 15){
            if(Type == 'C'){
                rabbit = rabbit + Amount;
            }
            else if(Type == 'R'){
                rat = rat + Amount;
            }
            else if(Type == 'S'){
                frog = frog + Amount;
            }
        }
    }
    Amount = rabbit + rat + frog;
    printf("Total: %d cobaias\n", Amount);
    printf("Total de coelhos: %d\n", rabbit);
    printf("Total de ratos: %d\n", rat);
    printf("Total de sapos: %d\n", frog);
    per_rabbit = (rabbit * 100.0) / Amount;
    printf("Percentual de coelhos: %0.2lf %%\n", per_rabbit);
    per_rat = (rat * 100.0) / Amount;
    printf("Percentual de ratos: %0.2lf %%\n", per_rat);
    per_frog = (frog * 100.0) / Amount;
    printf("Percentual de sapos: %0.2lf %%\n", per_frog);

    return 0;
}
