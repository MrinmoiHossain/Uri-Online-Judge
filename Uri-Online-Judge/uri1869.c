#include <stdio.h>

int base32(unsigned long long int decimal);

int main()
{
    unsigned long long int N;

    while(scanf("%llu", &N) != 0){
        if(N == 0){
            printf("0\n");
            break;
        }
        else{
            base32(N);
            printf("\n");
        }
    }

    return 0;
}

int base32(unsigned long long int decimal)
{
    unsigned long long int quociente, resto;

    if(decimal){
        quociente = decimal/32;
        resto = decimal%32;

        base32(quociente);

        switch(resto){

             case 10: putchar('A'); break;
             case 11: putchar('B'); break;
             case 12: putchar('C'); break;
             case 13: putchar('D'); break;
             case 14: putchar('E'); break;
             case 15: putchar('F'); break;
             case 16: putchar('G'); break;
             case 17: putchar('H'); break;
             case 18: putchar('I'); break;
             case 19: putchar('J'); break;
             case 20: putchar('K'); break;
             case 21: putchar('L'); break;
             case 22: putchar('M'); break;
             case 23: putchar('N'); break;
             case 24: putchar('O'); break;
             case 25: putchar('P'); break;
             case 26: putchar('Q'); break;
             case 27: putchar('R'); break;
             case 28: putchar('S'); break;
             case 29: putchar('T'); break;
             case 30: putchar('U'); break;
             case 31: putchar('V'); break;

             default: printf("%llu", resto);

        }
    }

   return 0;

}
