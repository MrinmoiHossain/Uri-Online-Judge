#include <stdio.h>
#include <ctype.h>

int main()
{
    int N, i, a, b;
    char c;

    scanf("%d", &N);

    for(i = 0; i < N; i++){
        scanf("%d %c %d", &a, &c, &b);

        if(a == b){
            printf("%d\n", a * b);
        }
        else if(islower(c)){
            printf("%d\n", a + b);
        }
        else if(isupper(c)){
            printf("%d\n", b - a);
        }
    }

    return 0;
}
