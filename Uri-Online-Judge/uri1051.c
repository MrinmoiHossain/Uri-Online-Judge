#include <stdio.h>

int main()
{
    double salary, intro, tax;

    scanf("%lf", &salary);

    if(salary >= 0.0 && salary <= 2000){
        printf("Isento\n");
    }
    else if(salary > 2000 && salary <= 3000){
        intro = salary - 2000;
        tax = intro * 0.08;
        printf("R$ %0.2lf\n", tax);
    }
    else if(salary > 3000 && salary <= 4500){
        intro = salary - 3000;
        tax = intro * 0.18 + 80.00;
        printf("R$ %0.2lf\n", tax);
    }
    else if(salary > 4500){
        intro = salary - 4500;
        tax = intro * 0.28 + 80.00 + 270.00;
        printf("R$ %0.2lf\n", tax);
    }

    return 0;
}
