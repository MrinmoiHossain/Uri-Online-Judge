#include <stdio.h>

int main()
{
    int a, i = 0;
    double average_age = 0;
     while(1){
        scanf("%d", &a);

        if(a < 0){
            break;
        }
        i = i + 1;
        average_age = average_age + a;
    }

    average_age = average_age / i;
    printf("%.2lf\n", average_age);

    return 0;
}
