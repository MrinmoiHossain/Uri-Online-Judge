#include <iostream>
#include <iomanip>

using namespace std;

int main()
{//10%wrong
    cout << fixed << setprecision(2);

    double salary, money_earned, new_salary, increase_percentual;

    cin >> salary;

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
    cout << "Novo salario: " << new_salary << endl;
    cout << "Reajuste ganho: " << money_earned << endl;

    cout << fixed << setprecision(0);
    cout << "Em percentual: " << increase_percentual * 100 << " %" << endl;


    return 0;
}

