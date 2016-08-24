#include <stdio.h>

int main()
{
    int n, m, s = 0, i;
    double note, z = 0;

    scanf("%d", &n);



    for(i = 0; i < n; i++){
        scanf("%d %lf", &m, &note);

        if(z < note){
            z = note;
            s = m;
        }
    }
    if(z >= 8.0){
        printf("%d\n", s);
    }
    else{
        printf("Minimum note not reached\n");
    }



    return 0;
}
