#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    cout << fixed << setprecision(5);

    double A, B, average;

    cin >> A;
    cin >> B;

    average = (A * 3.5 + B * 7.5) / 11;

    cout << "MEDIA = " << average << endl;

    return 0;
}
