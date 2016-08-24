#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    cout << fixed << setprecision(2);

    double salary, intro, tax;

    cin >> salary;

    if(salary >= 0.0 && salary <= 2000){
        cout << "Isento" << endl;
    }
    else if(salary > 2000 && salary <= 3000){
        intro = salary - 2000;
        tax = intro * 0.08;
        cout << "R$ " << tax << endl;
    }
    else if(salary > 3000 && salary <= 4500){
        intro = salary - 3000;
        tax = intro * 0.18 + 80.00;
        cout << "R$ " << tax << endl;
    }
    else if(salary > 4500){
        intro = salary - 4500;
        tax = intro * 0.28 + 80.00 + 270.00;
        cout << "R$ " << tax << endl;
    }

    return 0;
}
