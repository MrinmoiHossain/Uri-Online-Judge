#include <stdio.h>
#include <string.h>

int main()
{
    int N, i;
    char f[10], s[10];

    scanf("%d", &N);

    for(i = 0; i < N; i++){
        scanf("%s", &f);
        scanf("%s", &s);

        if(f[1] == 'e' && s[1] == 'e'){
            printf("Sem ganhador\n");
        }
        else if(f[1] == 'a' && s[1] == 'a'){
            printf("Ambos venceram\n");
        }
        else if(f[1] == 't' && s[1] == 't'){
            printf("Aniquilacao mutua\n");
        }
        else if((f[1] == 'e' && s[1] == 'a') || f[1] == 't'){
            printf("Jogador 1 venceu\n");
        }
        else{
            printf("Jogador 2 venceu\n");
        }
    }

    return 0;
}
