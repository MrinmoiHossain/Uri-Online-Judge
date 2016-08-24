#include <stdio.h>
#include <string.h>

int main()
{
    int T, i;
    char word[100];

    scanf("%d", &T);

    for(i = 0; i < T; i++){
        scanf("%s", &word);

        if(strlen(word) == 5){
            printf("3\n");
        }
        else if((word[0] == 'o' && word[1] == 'n') || (word[0] == 'o' && word[2] == 'e') || (word[1] == 'n' && word[2] == 'e') && strlen(word) == 3){
            printf("1\n");
        }
        else{
            printf("2\n");
        }
    }

    return 0;
}
