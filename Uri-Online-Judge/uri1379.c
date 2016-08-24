#include <stdio.h>

int main()
{
    int A, B, C;

    while(scanf("%d %d", &A, &B) != 0){
        if(A == 0 && B == 0){
            break;
        }
        else{
            C = 2 * A - B;
            printf("%d\n", C);
        }
    }

    return 0;
}
