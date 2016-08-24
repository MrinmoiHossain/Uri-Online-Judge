#include <stdio.h>

#define N 10000

void myFunction(int ara[]);

int main()
{
    int m;
    int ara[N + 1] = {0};
    myFunction(ara);

    while(scanf("%d", &m) == 1){
        if(m >= 0 && ara[m] == 1){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
    }

    return 0;
}

void myFunction(int ara[])
{
    int i, j, s;

    for(i = 0; i * i <= N; i++){
        for(j = 0; j * j <= N; j++){
            if((i * i) + (j * j) <= N){
                s = (i * i) + (j * j);
                ara[s] = 1;
            }
        }
    }
}
