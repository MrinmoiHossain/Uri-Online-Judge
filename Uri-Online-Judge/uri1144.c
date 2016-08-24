#include <stdio.h>

int main()
{
    int N, a, b, c;

    scanf("%d", &N);

    for(a = 1; a <= N; a++){
          b = a * a;
          c = a * a * a;

          printf("%d %d %d\n", a, b, c);
          printf("%d %d %d\n", a, b + 1, c + 1);
    }

    return 0;
}
