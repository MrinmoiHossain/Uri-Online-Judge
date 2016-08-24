#include <stdio.h>

int main()
{
    int n, i, sum;
    char m[11];

    while(scanf("%d %s", &n, &m) != EOF){
        sum = 0;

        for(i = 0; i < n; i++){
            sum = sum + m[i] - '0';
        }

        if(sum % 3 == 0){
            printf("%d sim\n", sum);
        }
        else{
            printf("%d nao\n", sum);
        }
    }
    return 0;
}
