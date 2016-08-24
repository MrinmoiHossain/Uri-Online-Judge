#include <iostream>

using namespace std;

int main()
{
    int N;
    int a = 100, b = 50, c = 20, d = 10, e = 5, f = 2, g = 1;
    int p, q, r, s, t, y, z, a1, a2, a3, a4, a5, a6;

    cin >> N;

    p = N / a;

    a1 = N - p * 100;
    q = a1 / b;

    a2 = a1 - q * b;
    r = a2 / c;

    a3 = a2 - r * c;
    s = a3 / d;

    a4 = a3 - s * d;
    t = a4 / e;

    a5 = a4 - t * e;
    y = a5 / f;

    a6 = a5 - y * f;
    z = a6 / g;


    cout << N << endl;
    cout << p << " nota(s) de R$ 100,00" << endl;
    cout << q << " nota(s) de R$ 50,00" << endl;
    cout << r << " nota(s) de R$ 20,00" << endl;
    cout << s << " nota(s) de R$ 10,00" << endl;
    cout << t << " nota(s) de R$ 5,00" << endl;
    cout << y << " nota(s) de R$ 2,00" << endl;
    cout << z << " nota(s) de R$ 1,00" << endl;

    return 0;
}

