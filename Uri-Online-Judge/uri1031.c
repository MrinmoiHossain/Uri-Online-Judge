#include <stdio.h>

int main()
{
    int N, m;

    while(scanf("%d", &N) != 0){
        if(N == 0){
            break;
        }
        else{
            m = 1;
            while(1){
                if(myFunction(N, m) != 11){
                    m++;
                }
                else{
                    break;
                }
            }
            printf("%d\n", m);
        }
    }

    return 0;
}

int myFunction(int n, int k)
{
    int r = 0, i;
    for(i = 1; i < n; i++){
        r = (r + k) % i;
    }

    return r;
}
