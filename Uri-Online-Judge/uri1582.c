#include <stdio.h>

int gcd(int a, int b, int c);

int main()
{
    int x, y, z, a, b, c;

    while(scanf("%d %d %d", &x, &y, &z) != EOF){
        if(x >= y && x >= z && y >= z ){
            a = x;
            b = y;
            c = z;
        }
        else if(x >= y && x >= z && z >= y){
            a = x;
            b = z;
            c = y;
        }
        else if(y >= x && y >= z && x >= z){
             a = y;
             b = x;
             c = z;
        }
        else if(y >= x && y >= z && z >= x){
             a = y;
             b = z;
             c = x;
        }
        else if(z >= x && z >= y && x >= y){
             a = z;
             b = x;
             c = y;
        }
        else if(z >= x && z >= y && y >= x){
             a = z;
             b = y;
             c = x;
        }
        if(b * b + c * c == a * a){
            if(gcd(a, b, c) == 1){
                printf("tripla pitagorica primitiva\n");
            }
            else{
                printf("tripla pitagorica\n");
            }
        }
        else if(b * b + c * c != a * a){
            printf("tripla\n");
        }
    }

    return 0;
}

int gcd(int a, int b, int c)
{
    int t, x, gcd;

    if (a == 0) gcd = a;

    else if (b == 0) gcd = b;

    else if (c == 0) gcd = c;

    else {
        while (b != 0) {
        t = b;
        b = a % b;
        a = t;
        }
    gcd = a;
    }

    return gcd;
}
