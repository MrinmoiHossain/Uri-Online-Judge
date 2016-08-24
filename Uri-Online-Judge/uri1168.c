#include <stdio.h>
#include <string.h>

int main()
{
    int N, i, size, j, sum;
    char V[1001];

    scanf("%d", &N);

    for(i = 0; i < N; i++){
        scanf("%s", &V);
        sum = 0;

        size = strlen(V);
        for(j = 0; j < size; j++){
            if(V[j] == '0' || V[j] == '9' || V[j] == '6'){
                sum += 6;
            }
            else if(V[j] == '2' || V[j] == '3' || V[j] == '5'){
                sum += 5;
            }
            else if(V[j] == '1'){
                sum += 2;
            }
            else if(V[j] == '4'){
                sum += 4;
            }
            else if(V[j] == '7'){
                sum += 3;
            }
            else{
                sum += 7;
            }
        }

        printf("%d leds\n", sum);
    }

    return 0;
}
