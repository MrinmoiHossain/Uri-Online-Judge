#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    cout << fixed << setprecision(1);
    int N, i;
    double a, b, c, z;

    cin >> N;

    for(i = 0; i < N; i++){
        cin >> a >> b >> c;
        z = (2 * a + 3 * b + 5 * c) / 10;
        cout << z << endl;
    }

    return 0;
}

