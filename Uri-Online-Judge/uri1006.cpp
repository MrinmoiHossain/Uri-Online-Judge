#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    cout << fixed << setprecision(1);

    double A, B, C, average;

    cin >> A;
    cin >> B;
    cin >> C;

    average = (A * 2 + B * 3 + C * 5) / 10;

    cout << "MEDIA = " << average << endl;

    return 0;
}
