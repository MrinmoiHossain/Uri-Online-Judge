#include <iostream>

using namespace std;

int main()
{
    int ara[5];
    int i, soma = 0, soma1 = 0, soma2 = 0, soma3 = 0;

    for(i = 0; i < 5; i++){
        cin >> ara[i];
    }
    for(i = 0; i < 5; i++){
        if(ara[i] % 2 == 0){
            soma++;
        }
        if(ara[i] % 2 != 0){
            soma1++;
        }
        if(ara[i] > 0){
            soma2++;
        }
        if(ara[i] < 0){
            soma3++;
        }
    }
    cout << soma << " valor(es) par(es)" << endl;
    cout << soma1 << " valor(es) impar(es)" << endl;
    cout << soma2 << " valor(es) positivo(s)" << endl;
    cout << soma3 << " valor(es) negativo(s)" << endl;

    return 0;
}

