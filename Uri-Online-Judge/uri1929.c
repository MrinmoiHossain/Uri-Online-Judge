#include <stdio.h>

int main()
{
    int A, B, C, D, m[4];
    int i, j, k, e, f, g;

    for(i = 0; i < 4; i++){
        scanf("%d", &m[i]);
    }

    for(i = 0; i < 4; i++){
        for(j = i + 1; j < 4; j++){
            if(m[j] < m[i]){
                e = m[i];
                m[i] = m[j];
                m[j] = e;
            }
        }
    }
    g = m[1] + m[2];
    f = m[0] + m[1];


    if(m[3] < g || m[2] < f){
        printf("S\n");
    }

    else{
        printf("N\n");
    }

    return 0;
}
