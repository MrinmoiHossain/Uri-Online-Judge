#include <stdio.h>

int main()
{
    double A, B, C, bc;

    scanf("%lf %lf %lf", &A, &B, &C);



        if(A >= B && A >= C){
                bc = B * B + C * C;
            if(A >= B + C){
            printf("NAO FORMA TRIANGULO\n");
            }
            else if(A * A == bc){
                printf("TRIANGULO RETANGULO\n");
            }
            else if(A * A > bc){
                printf("TRIANGULO OBTUSANGULO\n");
            }
            else if(A * A < bc){
                printf("TRIANGULO ACUTANGULO\n");
            }
        }
        else if(B >= A && B >= C){
                bc = A * A + C * C;
            if(B >= A + C){
            printf("NAO FORMA TRIANGULO\n");
            }
            else if(B * B == bc){
                printf("TRIANGULO RETANGULO\n");
            }
            else if(B * B > bc){
                printf("TRIANGULO OBTUSANGULO\n");
            }
            else if(B * B < bc){
                printf("TRIANGULO ACUTANGULO\n");
            }
         }
         else if(C >= A && C >= B){
                bc = A * A + B * B;
            if(C >= A + B){
            printf("NAO FORMA TRIANGULO\n");
            }
            else if(C * C == bc){
                printf("TRIANGULO RETANGULO\n");
            }
            else if(C * C > bc){
                printf("TRIANGULO OBTUSANGULO\n");
            }
            else if(C * C < bc){
                printf("TRIANGULO ACUTANGULO\n");
            }
         }
         if(A == B && B == C && C == A){
            printf("TRIANGULO EQUILATERO\n");
         }
         if((A == B && B != C) || (B == C && C != A) || (C == A && C != B)){
                printf("TRIANGULO ISOSCELES\n");
         }



    return 0;
}
