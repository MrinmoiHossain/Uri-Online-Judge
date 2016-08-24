#include <stdio.h>

int main()
{
    int N, i, X;
    int arr[2001];

    scanf("%d", &N);
    int num[N];

    for(i = 0; i < N; i++){
        scanf("%d", &X);
        arr[X] += 1;
    }
    for(i = 0; i < 2001; i++){
        if(arr[i] != 0){
            printf("%d aparece %d vez(es)\n", i, arr[i]);
        }
    }
    return 0;
}
