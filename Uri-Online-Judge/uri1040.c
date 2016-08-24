#include <stdio.h>

int main()
{
    float N1, N2, N3, N4, MEDIA, average1;

    scanf("%f %f %f %f", &N1, &N2, &N3, &N4);

    MEDIA = (N1 * 2 + N2 * 3 + N3 * 4 + N4 * 1) / (2 + 3 + 4 + 1);

    printf("Media: %0.1f\n", MEDIA);

    if(MEDIA >= 7){
        printf("Aluno aprovado.\n");
    }
    else if(MEDIA < 5){
        printf("Aluno reprovado.\n");
    }
    else if(MEDIA >= 5){
        printf("Aluno em exame.\n");
        scanf("%f", &average1);
        MEDIA = (MEDIA + average1) / 2;
        printf("Nota do exame: %0.1f\n", average1);
        if(MEDIA >= 5){
            printf("Aluno aprovado.\n");
        }
        else{
            printf("Aluno reprovado.\n");
        }
        printf("Media final: %0.1f\n", MEDIA);
    }

    return 0;
}
