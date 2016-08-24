#include <stdio.h>

int main()
{
    double A, B, a, c;

    scanf("%lf %lf", &A, &B);

    a = B - A;
    if(a > 0){
        c = (a / A) * 100;
        printf("%0.2lf%%\n", c);
    }
    else{
        c = 0;
        printf("%0.2lf%%\n", c);
    }

    return 0;
}
