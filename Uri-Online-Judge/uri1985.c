#include <stdio.h>

int main()
{
    int T, p, q, i;
    double total = 0;

    scanf("%d", &p);

    for(i = 0; i < p; i++){
        scanf("%d %d", &T, &q);

        if(T == 1001){
            total = total + 1.50 * q;
        }
        if(T == 1002){
            total = total + 2.50 * q;
        }
        if(T == 1003){
            total = total + 3.50 * q;
        }
        if(T == 1004){
            total = total + 4.50 * q;
        }
        if(T == 1005){
            total = total + 5.50 * q;
        }

    }

        printf("%0.2lf\n", total);

    return 0;
}
