#include <stdio.h>

int main()
{
    long long int number, count = 0;
    char name[1000];
    double total = 0.0;

    while(scanf("%[^\n]", &name) != EOF){
        scanf("%lld", &number);
        total = total + number;
        count++;
    }
    printf("%0.1lf\n", total/(double)count);

    return 0;
}
