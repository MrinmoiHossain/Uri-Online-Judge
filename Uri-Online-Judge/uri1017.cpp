#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    cout << fixed << setprecision(3);

    int spent_time, average_speed;
    double distance, liters;

    cin >> spent_time;
    cin >> average_speed;

    distance = spent_time * average_speed;
    liters = distance / 12;

    cout << liters << endl;

    return 0;
}
