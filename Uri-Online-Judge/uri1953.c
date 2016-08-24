#include <stdio.h>

int main()
{
    int n, i, ac, ec, ic, m;
    char name[10];

    while(scanf("%d", &n) != EOF){
        ac = ec = ic = 0;
        for(i = 0; i < n; i++){
            scanf("%d %s", &m, &name);

            if(name[0] == 'E' && name[1] == 'P'){
                ac++;
            }
            else if(name[0] == 'E' && name[1] == 'H'){
                ec++;
            }
            else{
                ic++;
            }
        }
        printf("EPR: %d\n", ac);
        printf("EHD: %d\n", ec);
        printf("INTRUSOS: %d\n", ic);
    }

    return 0;
}
