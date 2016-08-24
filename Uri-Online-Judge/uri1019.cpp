#include <iostream>

using namespace std;

int main()
{
    int N;
    int hours, minutes, seconds, a;

    cin >> N;

    hours = N / 3600;

    a = N - hours * 3600;
    minutes = a / 60;

    seconds = a - minutes * 60;

    cout << hours << ":" << minutes << ":" << seconds << endl;

    return 0;
}
