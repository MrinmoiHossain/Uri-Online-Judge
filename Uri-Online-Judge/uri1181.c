#include <stdio.h>

int main()
{
    int L, i, j;
    char T;
    float x, sum = 0;
    float M[12][12];

    scanf("%d", &L);
    scanf("%c", &T);


    for(i = 0; i < 12; i++){
        for(j = 0; j < 12; j++){
            scanf("%f", &x);
            x = M[i][j];
        }
   }
   for(i = L; i < (L+1); i++){
        for(j = 0; j < 12; j++){
            sum += M[i][j];
        }
   }
   if(T == 'S'){
    printf("%0.1f", sum);
   }
   else{
    printf("%0.1f", sum / 12.0);
   }

   return 0;
}
