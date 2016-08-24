#include <stdio.h>

int main()
{
    int N, R, i = 1, count;

    while(scanf("%d %d", &N, &R) > 0){
        if(N == 0 && R == 0){
            break;
        }
        else if(R >= N){
            printf("Case %d: 0\n", i);
        }
        else{
           count = 0;
           while(1){
                if(count * R >= N || count > 30){
                    break;
                }
                count++;
           }
           if(count <= 27){
             printf("Case %d: %d\n", i, count - 1);
           }
           else{
             printf("Case %d: impossible\n", i);
           }
        }
        i++;
    }

    return 0;
}
