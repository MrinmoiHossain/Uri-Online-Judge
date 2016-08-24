#include <stdio.h>

int main()
{
    int h, m, minutos;

    while(scanf("%d:%d", &h, &m) != EOF){
         minutos = 0;
            if( h < 8 ){
                minutos =  minutos + m + (8 - h) * 60;
                minutos-= 60;

                    if(minutos > 0 && minutos <60){
                            printf("Atraso maximo: %d\n",minutos);
                    }
                    else if(minutos >= 60){
                           printf("Atraso maximo: 0\n");
                    }
                    else if(minutos == 0){
                           printf("Atraso maximo: 0\n");
                    }
            }

            if(h >= 8){
                minutos = minutos + m + (h - 8) * 60;
                minutos+=60;

                printf("Atraso maximo: %d\n",minutos);
            }
    }

    return 0;
}
