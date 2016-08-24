#include <stdio.h>

int main()
{
    int P, a, b;

    while(scanf("%d", &P) != EOF){
        a = 2;
        b = 1;

        while(a != 1){
            if(a <= P/2){
                a += a;
            }
            else{
                a -= (P - a + 1);
            }
            b++;
        }
        printf("%d\n", b);
    }

    return 0;
}
