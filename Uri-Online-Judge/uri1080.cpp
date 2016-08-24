#include <iostream>

using namespace std;

int main()
{
    int N, i, maxi = 0, pos = 1;

    cin >> N;

    for(i = 0; i < 100; i++){
        cin >> N;

        if(N > maxi){
            maxi = N;
            pos = i + 2;
        }
    }
    cout << maxi << endl;
    cout << pos << endl;

    return 0;
}
