#include<stdio.h>

int main()
{
    int T, PA, PB, cont, i;
	double G1, G2;

    scanf("%d", &T);

    for(i = 0; i < T; i++){
        cont = 0;
       scanf("%d %d %lf %lf", &PA, &PB, &G1, &G2);

       while(PA <= PB && cont <= 100){
            cont++;
          PA = PA + ( PA * (G1/100) );
          PB = PB + ( PB * (G2/100) );
       }

       if(cont > 100){
            printf("Mais de 1 seculo.\n");
        }
        else{
           printf("%d anos.\n", cont);
        }
    }

    return 0;
}
