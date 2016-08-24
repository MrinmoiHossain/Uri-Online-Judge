#include <stdio.h>

int main()
{
    char N[1001];
    int i, count1, count2;

    while(scanf("%s", &N) != EOF){
        count1 = 0;
        count2 = 0;
       for(i = 0; N[i] != '\0'; i++){
        if(N[i] == '(' ){
            count1++;
        }
        else if(N[i] == ')' ){
            count2++;
            if(count1 > 0){
               count1--;
               count2--;
            }
        }
       }

       if(count1 == 0 && count2 == 0){
            printf("correct\n");
        }
        else{
            printf("incorrect\n");
        }
    }

    return 0;
}
