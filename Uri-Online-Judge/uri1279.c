#include <stdio.h>
#include <string.h>

int split(char ara[], int len, int year);

int main()
{//30%
    int len, f, l, line = 0;
    char year[1000001];

    while(scanf("%s", &year) != EOF){
        len = strlen(year);

        if(line == 1){
            printf("\n");
        }
        line == 1;
        f = 0;
        l = 0;

        if(split(year, len, 4) == 0 && split(year, len, 100) != 0 || split(year, len, 400) == 0){
             printf("This is leap year.\n");
             f=1;
             l=1;
         }
         if(split(year, len, 15) == 0){
           printf("This is huluculu festival year.\n");
            f=1;
         }
         if(split(year, len, 55)==0 && l == 1){
            printf("This is bulukulu festival year.\n");
        }
        if(f == 0){
            printf("This is an ordinary year.\n");
        }
    }

    return 0;
}

int split(char ara[], int len, int year)
{
    int long long n = 0;
    int i;

    for(i = 0; i < len; i++){
        n = (n * 10+ (ara[i]-'0')) % year;
    }
    if(n == 0)
        return 0;
    else
        return 1;

}
