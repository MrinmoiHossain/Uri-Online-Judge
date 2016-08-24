#include <iostream>

using namespace std;

int main()
{
    int start_day, end_day, start_hour, start_minute, start_second, end_hour, end_minute, end_second, W, X, Y, Z;
    int total_ini, total_fin, total_final;
    char date[4];

    cin >> date >> start_day;
    cin >> start_hour >> date >> start_minute >> date >> start_second;
    cin >> date >> end_day;
    cin >> end_hour >> date >> end_minute >> date >> end_second;

    total_ini = start_day * 86400 + start_hour * 3600 + start_minute * 60 + start_second;
    total_fin = end_day * 86400 + end_hour * 3600 + end_minute * 60 + end_second;
    total_final = total_fin - total_ini;

    W = total_final / 86400;
    X = (total_final % 86400) / 3600;
    Y = ((total_final % 86400) % 3600) / 60;
    Z = ((total_final % 86400) % 3600) % 60;

    cout << W << " dia(s)" << endl;
    cout << X << " hora(s)" << endl;
    cout << Y << " minuto(s)" << endl;
    cout << Z << " segundo(s)" << endl;

    return 0;
}
