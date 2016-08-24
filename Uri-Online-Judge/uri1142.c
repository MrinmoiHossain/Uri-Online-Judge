#include <stdio.h>

int main()
{
    int N, i, aux = 1, a, b, c;

    scanf("%d", &N);

    for (i = 0; i < N; i++) {
            a = aux;
            b = aux + 1;
            c = aux + 2;
            printf("%d %d %d PUM\n", a, b, c);
            aux = aux + 4;
    }

    return 0;
}
