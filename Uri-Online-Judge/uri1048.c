#include <stdio.h>

int main()
{
    double salary, money_earned, new_salary, increase_percentual;

    scanf("%lf", &salary);

    if(salary >= 0 && salary <= 400){
        increase_percentual = 0.15;
        money_earned = salary * increase_percentual;
        new_salary = salary + money_earned;
    }
    else if(salary > 400 && salary <= 800){
        increase_percentual = 0.12;
        money_earned = salary * increase_percentual;
        new_salary = salary + money_earned;
    }
    else if(salary > 800 && salary <= 1200){
        increase_percentual = 0.10;
        money_earned = salary * increase_percentual;
        new_salary = salary + money_earned;
    }
    else if(salary > 1200 && salary <= 2000){
        increase_percentual = 0.07;
        money_earned = salary * increase_percentual;
        new_salary = salary + money_earned;
    }
    else if(salary > 2000){
        increase_percentual = 0.04;
        money_earned = salary * increase_percentual;
        new_salary = salary + money_earned;
    }
    printf("Novo salario: %0.2lf\n", new_salary);
    printf("Reajuste ganho: %0.2lf\n", money_earned);
    printf("Em percentual: %0.0lf %%\n" , increase_percentual * 100);


    return 0;
}
