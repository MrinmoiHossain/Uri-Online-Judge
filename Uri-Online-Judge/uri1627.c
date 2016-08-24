#include <stdio.h>

int main()
{
    int T, i, At, Ad, Bt, Bd, H, ra, rb;

    scanf("%d", &T);

    for(i = 0; i < T; i++){
        scanf("%d %d %d %d", &At, &Ad, &Bt, &Bd);
        scanf("%d", &H);
        ra =0, rb = 0;

        while(1){
            if(ra <= rb){
                H -=At;
                rb -= ra;
                ra = Ad;

                if(H <= 0){
                    printf("Andre\n");
                    break;
                }
            }
            else{
                H -= Bt;
                ra -= rb;
                rb = Bd;

                if(H <= 0){
                    printf("Beto\n");
                    break;
                }
            }
        }
    }

    return 0;
}
