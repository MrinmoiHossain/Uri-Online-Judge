#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    cout << fixed << setprecision(2);

    int X, Y;
    double total;

    cin >> X >> Y;

    if(X == 1){
        total = 4.00 * Y;
        cout << "Total: R$ " << total << endl;
    }
    else if(X == 2){
        total = 4.50 * Y;
        cout << "Total: R$ " << total << endl;
    }
    else if(X == 3){
        total = 5.00 * Y;
        cout << "Total: R$ " << total << endl;
    }
    else if(X == 4){
        total = 2.00 * Y;
        cout << "Total: R$ " << total << endl;
    }
    else{
        total = 1.50 * Y;
        cout << "Total: R$ " << total << endl;
    }

    return 0;
}
