#include <stdio.h>

int main()
{
    int fuel, i, alcool = 0, gasolina = 0, disel = 0;

    while(1){
       scanf("%d", &fuel);
       if(fuel == 4){
        break;
       }
       else if(fuel == 1){
            alcool++;
       }
       else if(fuel == 2){
            gasolina++;
       }
       else if(fuel == 3){
            disel++;
       }
    }
    printf("MUITO OBRIGADO\n");
    printf("Alcool: %d\n", alcool);
    printf("Gasolina: %d\n", gasolina);
    printf("Diesel: %d\n", disel);

    return 0;
}
