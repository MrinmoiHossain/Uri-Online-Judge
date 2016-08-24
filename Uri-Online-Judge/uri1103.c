#include <stdio.h>

int main()
{
    int H1, M1, H2, M2;
    int a, b;

    while(scanf("%d %d %d %d", &H1, &M1, &H2, &M2) != 0){
        if(H1 == 0 && M1 == 0 && H2 == 0 && M2 == 0){
            break;
        }
        else if(H1 > H2){
            a = (24 * 60) - (H1 * 60 + M1);
            b = (H2 * 60) + M2;
            printf("%d\n", a + b);
        }
        else if(H1 < H2){
            a = H1 * 60 + M1;
            b = H2 * 60 + M2;
            printf("%d\n", b - a);
        }
        else if(H1 == H2){
            if(M2 > M1){
                printf("%d\n", M2 - M1);
            }
            else{
                a = M1 - M2;
                b = 24 * 60 - a;
                printf("%d\n", b);
            }
        }
    }

    return 0;
}
