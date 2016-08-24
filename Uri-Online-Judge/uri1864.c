#include <stdio.h>

int main()
{
    char b[36] = {'L','I','F','E',' ','I','S',' ','N','O','T',' ','A',' ','P','R','O','B','L','E','M',' ','T','O',' ','B','E',' ','S','O','L','V','E','D'};
    int N, i;

    scanf("%d", &N);

    for(i = 0; i < N; i++){
        printf("%c", b[i]);
        if(i == N - 1){
            printf("\n");
        }
    }



    return 0;
}
