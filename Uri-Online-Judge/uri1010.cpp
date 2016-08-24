#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    cout << fixed << setprecision(2);

    int code_product1, code_product2, unit_product1, unit_product2;
    double price_product1, price_product2, value_pay;

    cin >> code_product1 >> unit_product1 >> price_product1;
    cin >> code_product2 >> unit_product2 >> price_product2;

    value_pay = unit_product1 * price_product1 + unit_product2 * price_product2;

    cout << "VALOR A PAGAR: R$ " << value_pay << endl;

    return 0;
}
