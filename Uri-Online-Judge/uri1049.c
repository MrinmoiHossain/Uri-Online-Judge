#include <stdio.h>

int main()
{
    char name1[30], name2[30], name3[30];


    scanf("%s", &name1);
    scanf("%s", &name2);
    scanf("%s", &name3);

    if(strcmp (name1, "vertebrado")==0){
        if(strcmp (name2, "ave")==0){
            if(strcmp (name3, "carnivoro")==0){
                printf("aguia\n");
            }
            if(strcmp (name3, "onivoro")==0){
                printf("pomba\n");
            }
        }
        if(strcmp (name2, "mamifero")==0){
            if(strcmp (name3, "onivoro")==0){
                printf("homem\n");
            }
            if(strcmp (name3, "herbivoro")==0){
                printf("vaca\n");
            }
        }
    }
    if(strcmp (name1, "invertebrado")==0){
       if(strcmp (name2, "inseto")==0){
          if(strcmp (name3, "hematofago")==0){
             printf("pulga\n");}
          if(strcmp (name3, "herbivoro")==0){
             printf("lagarta\n");}
       }
       if(strcmp (name2, "anelideo")==0){
          if(strcmp (name3, "hematofago")==0){
             printf("sanguessuga\n");}
          if(strcmp (name3, "onivoro")==0){
             printf("minhoca\n");}
       }
    }

    return 0;
}
