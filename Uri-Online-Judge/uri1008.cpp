#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    cout << fixed << setprecision(2);

    int employee_number, worked_hours;
    double amount, salary;

    cin >> employee_number;
    cin >> worked_hours;
    cin >> amount;

    cout << "NUMBER = " << employee_number << endl;

    salary = worked_hours * amount;
    cout << "SALARY = U$ " << salary << endl;

    return 0;
}
