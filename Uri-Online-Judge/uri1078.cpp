#include <iostream>

using namespace std;

int main()
{
    int N, i, b;

    cin >> N;

    if(N > 1 && N < 1000){
        for(i = 1; i <= 10; i++){
            b = i * N;
            cout << i << " x " << N << " = " << b << endl;
        }
    }

    return 0;
}
