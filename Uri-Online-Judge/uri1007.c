#include <stdio.h>

int main()
{
    int A, B, C, D, diff;

    scanf("%d", &A);
    scanf("%d", &B);
    scanf("%d", &C);
    scanf("%d", &D);

    diff = A * B - C * D;

    printf("DIFERENCA = %d\n", diff);

    return 0;
}
