#include <stdio.h>

int main()
{
    int N, X, Y, i;
    double z;

    scanf("%d", &N);

    for(i = 0; i < N; i++){
      scanf("%d %d", &X, &Y);

      if(Y == 0){
        printf("divisao impossivel\n");
      }
      else if(X == 0){
        printf("0.0\n");
      }
      else{
        z = (double)X / (double)Y;
        printf("%0.1lf\n", z);
      }
    }
    return 0;
}
