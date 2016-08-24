#include <stdio.h>
#include <string.h>

int main()
{
    char music[1001];
    int i, count;
    double total = 0;

    while(scanf("%s", &music) != '*'){
        if(music[0] == '*'){
            break;
        }
        for(i = 0, count = 0; music[i]; i++){
            if(music[i] == '/'){
                if(total == 1){
                    count++;
                }
                total = 0;
            }
            else if(music[i] == 'W'){
                total += 1.0;
            }
            else if(music[i] == 'H'){
                total += 1.0/2.0;
            }
            else if(music[i] == 'Q'){
                total += 1.0/4.0;
            }
            else if(music[i] == 'E'){
                total += 1.0/8.0;
            }
            else if(music[i] == 'S'){
                total += 1.0/16.0;
            }
            else if(music[i] == 'T'){
                total += 1.0/32.0;
            }
            else if(music[i] == 'X'){
                total += 1.0/64.0;
            }
        }
        printf("%d\n", count);
    }

    return 0;
}
