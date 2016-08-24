#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int N, C, i, j, S = 0;

    cin >> C;

    for(j = 0; j < C; j++){
        cin >> N;
        S = 0;
        for(i = 0; i < N; i++){
            S = S + pow(-1,i);
        }
    cout << S << endl;
    }

    return 0;
}
