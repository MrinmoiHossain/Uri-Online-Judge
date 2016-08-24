#include <iostream>

using namespace std;

int main()
{
    int ara[5];
    int i, soma = 0;

    for(i = 0; i < 5; i++){
        cin >> ara[i];
    }
    for(i = 0; i < 5; i++){
        if(ara[i] % 2 == 0){
            soma++;
        }
    }

    cout << soma << " valores pares" << endl;

    return 0;
}
