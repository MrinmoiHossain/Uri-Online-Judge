#include <iostream>

using namespace std;

int main()
{
    int N, X, i, count1 = 0, count2 = 0;

    cin >> N;

    for(i = 0; i < N; i++){
        cin >> X;
        if(X >= 0 && X <= 20){
            count1++;
        }
        else{
            count2++;
        }
    }
    cout << count1 << " in" << endl;
    cout << count2 << " out" << endl;

    return 0;
}

