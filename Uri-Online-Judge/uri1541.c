#include <stdio.h>
#include <math.h>

int main()
{
    int  A, B, C;
    double Casa, X, Area, Terreno;


    while(scanf("%d", &A) && A != 0){
        if(A == 0){
            break;
        }
        else{
                scanf("%d %d", &B, &C);
            Area = (A * B * 100) / C;
        Terreno = sqrt(Area);

        printf("%d\n", (int)Terreno);
        }

    }

    return 0;
}
