#include <stdio.h>
#include <math.h>

double myFunction(int a, int b, int c);

int main()
{
    int EV1, EV2, AT, D, aux;

    double m;

    while(scanf("%d %d %d %d", &EV1, &EV2, &AT, &D) != 0){
        if(EV1 == 0 && EV2 == 0 && AT == 0 && D == 0){
            break;
        }

        aux = EV1;
        EV1 = 0;
        while(aux > 0){
            aux -= D;
            EV1++;
        }
        aux = EV2;
        EV2 = 0;
        while(aux > 0){
            aux -= D;
            EV2++;
        }

        m = myFunction(EV1, EV2, AT);

        printf("%0.1f\n", m * 100);
    }

    return 0;
}

double myFunction(int a, int b, int c)
{
    double dado;
    if(c == 3){
        return (double)a/(double) (a + b);
    }
    else{
        dado = 1.0 - (6-c)/6.0;
        dado = (1 - dado)/dado;
        return (1.0 - pow(dado,a))/(1.0 - pow(dado,a+b));
    }
}
