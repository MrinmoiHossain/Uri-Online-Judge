#include <stdio.h>

int main()
{
    double i, j, a;
    int k;
    for(i = 0; i <= 1.9; i += 0.2){
        for (j = 1; j <= 3; j += 1){
                a = j + i;
            if(i == 0.0 || i == 1.0){
                printf("I=%0.0lf J=%0.0lf", i, a);
            }
            else if(a == 3.0|| a == 4.0|| a == 5.0){
                printf("I=%0.0lf J=%0.0lf", i, a);
            }
            else{
                printf("I=%0.1lf J=%0.1lf", i, a);
            }
            printf("\n");
        }
    }
    for(k = 3; k <= 5; k++){
        printf("I=2 J=%d\n", k);
    }


    return 0;
}
