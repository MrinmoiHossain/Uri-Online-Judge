#include <stdio.h>
#include <string.h>

int main()
{
    int N, i, A, T, diff;
    char name[51], c_name[55];

    while(scanf("%d", &N) != 0){
        diff = 10000000;
        if(N == 0){
            break;
        }
        for(i = 0; i < N; i++){
            scanf("%s %d %d", &name, &A, &T);

            if((A - T) < diff){
                diff = A - T;
                c_name[51] = name[51];
            }
        }

        printf("%s\n", c_name);
    }

    return 0;
}
