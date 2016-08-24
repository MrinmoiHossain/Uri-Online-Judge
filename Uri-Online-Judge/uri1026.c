#include <stdio.h>

int main()
{
    unsigned long int x, y, r;

    while(scanf("%lu %lu", &x, &y) != EOF){
        r = x ^ y;
        printf("%lu\n", r);
    }
    return 0;
}
