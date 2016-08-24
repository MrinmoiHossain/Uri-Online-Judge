#include <iostream>

using namespace std;

int main()
{
    double ara[6];
    int i, soma = 0;

    for(i = 0; i < 6; i++){
        cin >> ara[i];
    }
    for(i = 0; i < 6; i++){
        if(ara[i] > 0){
            soma++;
        }
    }
    cout << soma << " valores positivos" << endl;

    return 0;
}

