#include <iostream>

using namespace std;

int main()
{
    int a, b, c, d;

    cin >> a >> b;

    if(a > b){
        c = 24 - a;
        d = c + b;
        cout << "O JOGO DUROU " << d << " HORA(S)" << endl;
    }
    else if(a < b){
        cout << "O JOGO DUROU " << b - a << " HORA(S)" << endl;
    }
    else if(a == b){
        cout << "O JOGO DUROU 24 HORA(S)" << endl;
    }


    return 0;
}
