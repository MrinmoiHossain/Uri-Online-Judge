#include <iostream>
#include <cmath>

using namespace std;

int main()
{//60%
    long long int N, Y, T, i, j;
    double soma;

    cin >> T;

    for(i = 1; i <= T; i++){
        cin >> N;

        soma = sqrt(N);

        if (soma - (int)soma == 0){
            Y = N;
        }
        else{
            for(j = int(soma); (j * j) % N != 0; j++){

            }
            Y = j * j;
        }
        cout << "Caso #" << i << ": " << Y << endl;
    }
    return 0;
}
