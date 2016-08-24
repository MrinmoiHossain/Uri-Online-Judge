#include <stdio.h>

int main()
{
    long long int n, a;

    scanf("%lld", &n);

    a = (n * (n - 3)) / 2;

    printf("%lld\n", a);

    return 0;
}
