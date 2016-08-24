#include <stdio.h>
#include <string.h>

int main()
{
    int C, i, N;
    char name[100], vat[4] = {'T','h','o','r'};

    scanf("%d", &C);

    for(i = 0; i < C; i++){
        scanf("%s %d", &name, &N);

        if(name[0] == 'T' && name[1] == 'h' && name[2] == 'o' && name[3] == 'r'){
            printf("Y\n");
        }
        else{
            printf("N\n");
        }
    }

    return 0;
}
