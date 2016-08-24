#include <stdio.h>

int main()
{
    int N, i, count2 = 0, count3 = 0, count4 = 0, count5 = 0;

    scanf("%d", &N);

    int L[N];

    for(i = 0; i < N; i++){
        scanf("%d", &L[i]);
    }
    for(i = 0; i < N; i++){
        if(L[i] % 2 == 0)
            count2++;
        if(L[i] % 3 == 0)
            count3++;
        if(L[i] % 4 == 0)
            count4++;
        if(L[i] % 5 == 0)
            count5++;
    }
    printf("%d Multiplo(s) de 2\n", count2);
    printf("%d Multiplo(s) de 3\n", count3);
    printf("%d Multiplo(s) de 4\n", count4);
    printf("%d Multiplo(s) de 5\n", count5);

    return 0;
}
