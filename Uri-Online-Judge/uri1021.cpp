#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    cout << fixed << setprecision(3);

    double N;
    int p, q, r, s, t, u;
    int j, k, l, m, n, o;
    int a = 100, b = 50, c = 20, d = 10, e = 5, f = 2;
    double aa = 1.00, bb = 0.50, cc = 0.25, dd = 0.10, ee = 0.05, ff = 0.01;
    double a1, a2, a3, a4, a5, a6;
    double b1, b2, b3, b4, b5;

    cin >> N;

    cout << "NOTAS:" << endl;

    p = N / a;
    cout << p << " nota(s) de R$ 100.00" << endl;
    a1 = N - p * a;

    q = a1 / b;
    cout << q << " nota(s) de R$ 50.00" << endl;
    a2 = a1 - q * b;

    r = a2 / c;
    cout << r << " nota(s) de R$ 20.00" << endl;
    a3 = a2 - r * c;

    s = a3 / d;
    cout << s << " nota(s) de R$ 10.00" << endl;
    a4 = a3 - s * d;

    t = a4 / e;
    cout << t << " nota(s) de R$ 5.00" << endl;
    a5 = a4 - t * e;

    u = a5 / f;
    cout << u << " nota(s) de R$ 2.00" << endl;
    a6 = a5 - u * f;

    cout << "MOEDAS:" << endl;

    j = a6 / aa;
    cout << j << " moeda(s) de R$ 1.00" << endl;
    b1 = a6 - j * aa;

    k = b1 / bb;
    cout << k << " moeda(s) de R$ 0.50" << endl;
    b2 = b1 - k * bb;

    l = b2 / cc;
    cout << l << " moeda(s) de R$ 0.25" << endl;
    b3 = b2 - l * cc;

    m = b3 / dd;
    cout << m << " moeda(s) de R$ 0.10" << endl;
    b4 = b3 - m * dd;

    n = b4 / ee;
    cout << n << " moeda(s) de R$ 0.05" << endl;
    b5 = b4 - n * dd;

    o = b5 / ff;
    cout << o << " moeda(s) de R$ 0.01" << endl;

    return 0;
}

