#include <stdio.h>

int main()
{
    int j, danca;
    char letter[50];

    while(NULL != gets(letter)){
        danca = 0;
        for(j = 0; j < 50; j++){
            if(letter[j] == '\0') break;
            if(danca == 0){
                if(letter[j] >= 97){
                    printf("%c", letter[j] - 32);
                                  danca = 1;
                }
                else if(letter[j] == 32){
                    printf("%c", letter[j]);
                }
                else{
                    printf("%c", letter[j]);
                    danca = 1;
                }
            }
            else{
                if(letter[j] >= 97){
                    printf("%c", letter[j]);
                               danca = 0;
                }
                else if(letter[j] == 32){
                    printf("%c", letter[j]);
                }
                else{
                    printf("%c", letter[j] + 32);
                        danca = 0;
                }
            }
         }
         printf("\n");
    }

    return 0;
}
