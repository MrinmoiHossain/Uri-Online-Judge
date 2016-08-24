#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    cout << fixed << setprecision(3);

    double A, B, C;
    double pi = 3.14159;
    double area_rectangled1, area_radius, area_trapezium, area_square, area_rectangled2;

    cin >> A >> B >> C;

    area_rectangled1 = (A * C) / 2;
    cout << "TRIANGULO: " << area_rectangled1 << endl;

    area_radius = pi * (C * C);
    cout << "CIRCULO: " << area_radius << endl;

    area_trapezium = 0.5 * (A + B) * C;
    cout << "TRAPEZIO: " << area_trapezium << endl;

    area_square = B * B;
    cout << "QUADRADO: " << area_square << endl;

    area_rectangled2 = A * B;
    cout << "RETANGULO: " << area_rectangled2 << endl;

    return 0;
}
