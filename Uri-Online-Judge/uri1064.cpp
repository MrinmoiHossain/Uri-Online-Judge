#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    cout << fixed << setprecision(1);

    double ara[6], total = 0, average;
    int i, soma = 0;

    for(i = 0; i < 6; i++){
        cin >> ara[i];
    }
    for(i = 0; i < 6; i++){
        if(ara[i] > 0){
            soma++;
            total = total + ara[i];
            average = total / soma;
        }
    }
    cout << soma << " valores positivos" << endl;
    cout << average << endl;

    return 0;
}


