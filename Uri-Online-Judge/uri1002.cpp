#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    cout << fixed << setprecision(4);
    double r = 3.14159, R, A;

    cin >> R;

    A = r * R * R;

    cout << "A=" << A << endl;

    return 0;
}
