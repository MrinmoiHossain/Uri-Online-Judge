#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    cout << fixed << setprecision(5);

    double A, B, C, x, r1, r2;

    cin >> A >> B >> C;

    x = pow(B, 2) - 4 * A * C;

    if(x > 0 && A != 0){
        r1 = (-B + sqrt(x)) / (2 * A);
        r2 = (-B - sqrt(x)) / (2 * A);

        cout << "R1 = " << r1 << endl;
        cout << "R2 = " << r2 << endl;
    }
    else{
        cout << "Impossivel calcular" << endl;
    }

    return 0;
}
