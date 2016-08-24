#include <stdio.h>

int main()
{
    int employee_number, worked_hours;
    double amount, salary;

    scanf("%d", &employee_number);
    scanf("%d", &worked_hours);
    scanf("%lf", &amount);

    salary = worked_hours * amount;

    printf("NUMBER = %d\n", employee_number);
    printf("SALARY = U$ %0.2lf\n", salary);

    return 0;
}
