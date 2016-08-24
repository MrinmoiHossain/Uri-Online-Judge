#include <stdio.h>

int main()
{
    unsigned long long number, temp, rev = 0;

    scanf("%llu", &number);

    if(number < 10){
        printf("%llu\n", number);
    }
    else{
            rev = 0;
       while(number > 0){
        temp = number % 10;
        rev = rev * 10 + temp;

        if(rev == 0){
            printf("0");
        }

        number = number / 10;
        }
        printf("%llu\n", rev);
    }


    return 0;
}
