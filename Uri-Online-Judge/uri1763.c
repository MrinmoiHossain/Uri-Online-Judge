#include <stdio.h>

int main()
{
    char name[1001];

    while(scanf("%s", &name) != EOF){
        if(strcmp (name, "brasil")==0 || strcmp (name, "portugal")==0){
            printf("Feliz Natal!\n");
        }
        else if(strcmp (name, "inglaterra")==0 || strcmp (name, "australia")==0 || strcmp (name, "estados-unidos")==0 || strcmp (name, "antardida")==0 || strcmp (name, "canada")==0){
            printf("Merry Christmas!\n");
        }
        else if(strcmp (name, "espanha")==0 || strcmp (name, "argentina")==0 || strcmp (name, "chile")==0 || strcmp (name, "mexico")==0){
            printf("Feliz Navidad!\n");
        }
        else if(strcmp (name, "marrocos")==0 || strcmp (name, "siria")==0){
            printf("Milad Mubarak!\n");
        }
        else if(strcmp (name, "italia")==0 || strcmp (name, "libia")==0){
            printf("Buon Natale!\n");
        }
        else if(strcmp (name, "alemanha")==0){
            printf("Frohliche Weihnachten!\n");
        }
        else if(strcmp (name, "austria")==0){
            printf("Frohe Weihnacht!\n");
        }
        else if(strcmp (name, "coreia")==0){
            printf("Chuk Sung Tan!\n");
        }
        else if(strcmp (name, "grecia")==0){
            printf("Kala Christougena!\n");
        }
        else if(strcmp (name, "suecia")==0){
            printf("God Jul!\n");
        }
        else if(strcmp (name, "turquia")==0){
            printf("Mutlu Noeller\n");
        }
        else if(strcmp (name, "belgica")==0){
            printf("Zalig Kerstfeest!\n");
        }
        else if(strcmp (name, "japao")==0){
            printf("Merii Kurisumasu!\n");
        }
        else if(strcmp (name, "irlanda")==0){
            printf("Nollaig Shona Dhuit!\n");
        }
        else{
            printf("--- NOT FOUND ---\n");
        }
    }

    return 0;
}
