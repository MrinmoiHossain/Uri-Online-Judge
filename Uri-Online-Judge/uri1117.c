#include <stdio.h>

int main()
{
    double a, b, med;

    scanf("%lf", &a);

      while(a < 0 || a > 10){
       printf("nota invalida\n");
       scanf("%lf", &a);
      }

      if(a >= 0 && a <= 10){
         scanf("%lf", &b);

        while(b < 0 || b > 10){
          printf("nota invalida\n");
          scanf("%lf",&b);
        }
         if(a >= 0 && b <= 10){
            med =(a + b) / 2;
            printf("media = %.2lf\n", med);
        }
      }


    return 0;
}
