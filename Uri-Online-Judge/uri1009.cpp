#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    cout << fixed << setprecision(2);

    char name[10];
    double fixed_salary, producus_salary, total_salary;

    cin >> name;
    cin >> fixed_salary;
    cin >> producus_salary;

    total_salary = fixed_salary + producus_salary * 0.15;

    cout << "TOTAL = R$ " << total_salary << endl;

    return 0;
}
