#include <stdio.h>

int main()
{
    int A, i, j, angle, test;

    while(scanf("%d", &A) != EOF){
        j = 0;
        test = 0;
        for(i = 0; i <= 60; i++){
            if(i % 5 == 0){
                j++;
            }
            angle = i * 6 - j * 6;
            if(A == angle || A == - angle){
                test = 1;
            }
        }
        if(test == 1){
            printf("Y\n");
        }
        else{
            printf("N\n");
        }
    }

    return 0;
}
