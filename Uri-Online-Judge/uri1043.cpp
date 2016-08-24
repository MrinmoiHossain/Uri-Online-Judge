#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    cout << fixed << setprecision(1);
    double A, B, C, area, perimetro;

    cin >> A >> B >> C;

    if((B-C) < A && A <(B+C) && (A-C) < B && B <(A+C) &&(A-B) < C && C <(A+B)){
            perimetro = A+B+C;
            cout << "Perimetro = " << perimetro << endl;
    }
    else{
        area= ((A+B)*C)/2;
        cout << "Area = " << area << endl;
    }

    return 0;
}
