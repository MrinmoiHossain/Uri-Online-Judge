#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    cout << fixed << setprecision(3);

    int X;
    double Y, average_consumption;

    cin >> X;
    cin >> Y;

    average_consumption = X / Y;

    cout << average_consumption << " km/l" << endl;

    return 0;
}
