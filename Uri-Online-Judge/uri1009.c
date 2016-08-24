#include <stdio.h>

int main()
{
    char name[10];
    double fixed_salary, producus_salary, total_salary;

    scanf("%s", &name);
    scanf("%lf", &fixed_salary);
    scanf("%lf", &producus_salary);

    total_salary = fixed_salary + producus_salary * 0.15;

    printf("TOTAL = R$ %0.2lf\n", total_salary);

    return 0;
}
