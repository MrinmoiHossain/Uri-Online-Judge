#include <stdio.h>

int main()
{
    int N, X, i;
    char Y[4];

    scanf("%d", &N);

    for(i = 0; i < N; i++){
        scanf("%d %s", &X, &Y);

        printf("Case %d:\n", i+1);

        if(strcmp (Y, "bin") == 0){
            printf("bin\n");
        }
        else if(strcmp (Y, "dec") == 0){
            printf("dec\n");
        }
        else{
            printf("hex\n");
        }

    }

    return 0;
}
