#include <stdio.h>
#include <string.h>

int main()
{
    char dollars[28], cents[4];
    int i,s1, s2;

    while((scanf("%s", &dollars) && scanf("%s", &cents)) != EOF){
            s1 = strlen(dollars);
            s2 = strlen(cents);

            printf("$");
            for(i = 0; i < s1; i++){
                if((s1 - i) % 3 == 0 && i > 0){
                    printf(",");
                }
                printf("%c", dollars[i]);
            }

            printf(".");
            if(s2 < 2){
                printf("0");
            }
            for(i = 0; i < s2; i++){
                printf("%c", cents[i]);
            }

            printf("\n");
    }

    return 0;
}
