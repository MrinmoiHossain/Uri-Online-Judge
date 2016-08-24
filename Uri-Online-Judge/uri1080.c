#include <stdio.h>

int main()
{
    int N, i, max = 0, pos = 1;

    for(i = 0; i < 100; i++){
        scanf("%d", &N);

        if(N > max){
            max = N;
            pos = i + 1;
        }
    }
    printf("%d\n", max);
    printf("%d\n", pos);

    return 0;
}
