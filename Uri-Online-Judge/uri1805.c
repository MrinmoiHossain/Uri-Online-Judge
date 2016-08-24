#include <stdio.h>

int main()
{
    unsigned long long int A, B, c;

    scanf("%lli %lli", &A, &B);

    c = (A + B) * ((B - A) + 1)/2;

    printf("%lli\n", c);

    return 0;
}
