#include <iostream>

using namespace std;

int main()
{
    int A, B, C, D, E, F;

    cin >> A >> B >> C >> D;

    E = C + D;
    F = A + B;

    if((B > C) && (D > A) && (E > F) && (C > 0) && (D > 0) && (A % 2 == 0)){
        cout << "Valores aceitos" << endl;
    }
    else{
        cout << "Valores nao aceitos" << endl;
    }

    return 0;
}
