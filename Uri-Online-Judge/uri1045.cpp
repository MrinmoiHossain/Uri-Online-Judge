#include <iostream>

using namespace std;

int main()
{
    double A, B, C, bc;

    cin >> A >> B >> C;

    if(A >= B && A >= C){
                bc = B * B + C * C;
            if(A >= B + C){
                cout << "NAO FORMA TRIANGULO" << endl;
            }
            else if(A * A == bc){
               cout << "TRIANGULO RETANGULO" << endl;
            }
            else if(A * A > bc){
               cout << "TRIANGULO OBTUSANGULO" << endl;
            }
            else if(A * A < bc){
               cout << "TRIANGULO ACUTANGULO" << endl;
            }
    }
    else if(B >= A && B >= C){
                bc = A * A + C * C;
            if(B >= A + C){
                cout << "NAO FORMA TRIANGULO" << endl;
            }
            else if(B * B == bc){
                cout << "TRIANGULO RETANGULO" << endl;
            }
            else if(B * B > bc){
                cout << "TRIANGULO OBTUSANGULO" << endl;
            }
            else if(B * B < bc){
                cout << "TRIANGULO ACUTANGULO" << endl;
            }
    }
    else if(C >= A && C >= B){
                bc = A * A + B * B;
            if(C >= A + B){
                cout << "NAO FORMA TRIANGULO" << endl;
            }
            else if(C * C == bc){
                cout << "TRIANGULO RETANGULO" << endl;
            }
            else if(C * C > bc){
                cout << "TRIANGULO OBTUSANGULO" << endl;
            }
            else if(C * C < bc){
                cout << "TRIANGULO ACUTANGULO" << endl;
            }
    }
    if(A == B && B == C && C == A){
        cout << "TRIANGULO EQUILATERO" << endl;
    }
    if((A == B && B != C) || (B == C && C != A) || (C == A && C != B)){
        cout << "TRIANGULO ISOSCELES" << endl;
    }


    return 0;
}
