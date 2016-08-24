#include <stdio.h>

int main()
{
    double C, i, sim, comp;;
    int n, e;

    while(scanf("%lf\n%lf\n%d", &C, &i, &n) != EOF){
        sim = C + ((C * i)*n);
        comp = C;
        for(e = 0; e < n; e++){
            comp = comp + (comp* i);
        }
          printf("DIFERENÇA DE VALOR = %.2lf\n", comp - sim);
          printf("JUROS SIMPLES = %.2lf\n", sim - C);
          printf("JUROS COMPOSTO = %.2lf\n", comp - C);
    }

    return 0;
}

