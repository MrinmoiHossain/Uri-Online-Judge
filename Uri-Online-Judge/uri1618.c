#include <stdio.h>

int main()
{
    int N, i, Ax, Ay, Bx, By, Cx, Cy, Dx, Dy, RX, RY;

    scanf("%d", &N);

    for(i = 0; i < N; i++){
        scanf("%d %d %d %d %d %d %d %d %d %d", &Ax, &Ay, &Bx, &By, &Cx, &Cy, &Dx, &Dy, &RX, &RY);

        if(RX >= Ax && RX <= Bx && RX <= Cx && RX >= Dx && RY >= Ay && RY >= By && RY <= Cy && RY <= Dy){
            printf("1\n");
        }
        else{
            printf("0\n");
        }
    }

    return 0;
}
