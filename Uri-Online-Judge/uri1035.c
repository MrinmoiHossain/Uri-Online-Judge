#include <stdio.h>

int main()
{
    int A, B, C, D, E, F;

    scanf("%d %d %d %d", &A, &B, &C, &D);

    E = C + D;
    F = A + B;

    if((B > C) && (D > A) && (E > F) && (C > 0) && (D > 0) && (A % 2 == 0)){
        printf("Valores aceitos\n");
    }
    else{
      printf("Valores nao aceitos\n");
    }

    return 0;
}
