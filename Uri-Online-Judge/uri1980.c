#include <stdio.h>
#include <string.h>

int main()
{
    char S[16];
    double i, r = 1;

    while(scanf("%s", &S) != 0){
        if(S[0] == '0'){
            break;
        }
        r = 1;
        for(i = 1; i <= strlen(S); i++){
            r *= i;
        }

        printf("%0.0lf\n", r);
    }

    return 0;
}

