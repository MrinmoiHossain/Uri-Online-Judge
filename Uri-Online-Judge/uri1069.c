#include <stdio.h>

int main()
{
    int N, i, j, count1, count2;
    char ch[1001];

    scanf("%d", &N);

    for(j = 0; j < N; j++){
        scanf("%s", &ch);
        count1 = 0;
        count2 = 0;

        for(i = 0; ch[i] != '\0'; i++){
            if(ch[i] == '<' ){
                count1++;
            }
            if(ch[i] == '>' ){
                if(count1 > 0){
                    count2++;
                    count1--;
                }
            }
        }

        printf("%d\n", count2);
    }

    return 0;
}
