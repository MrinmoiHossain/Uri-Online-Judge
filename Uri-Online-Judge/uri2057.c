#include <stdio.h>

int main()
{
    int S, T, F, total;

    scanf("%d %d %d", &S, &T, &F);

    if(S > 0){
        total = S + T + F;

        if(total < 24)
            printf("%d\n", total);
        else if(total > 24)
            printf("%d\n", total - 24);
        else
            printf("0\n");
    }
    else if(S == 0){
        total = 24 + T + F;

        if(total < 24)
            printf("%d\n", total);
        else if(total > 24)
            printf("%d\n", total - 24);
        else
            printf("0\n");
    }

    return 0;
}
