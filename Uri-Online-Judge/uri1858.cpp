#include <iostream>

using namespace std;

int main()
{
    int N, i, c, j = 0, e = 1;

    cin >> N;

    int T[N];
    for(i = 0; i < N; i++){
        cin >> T[i];
    }

    c = T[j];
    for(j = 0; j < N; j++){
        if(T[j] < c)
        {
            c = T[j];
            e = j + 1;
        }

    }

    cout << e << endl;

    return 0;
}
