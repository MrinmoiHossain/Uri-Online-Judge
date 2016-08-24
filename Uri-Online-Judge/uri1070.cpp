#include <iostream>

using namespace std;

int main()
{
    int X, i;

    cin >> X;

    if(X % 2 == 0){
        for(i = X; i < X + 12; i++){
            if(i % 2 == 1){
                cout << i << endl;
            }
        }
    }
    if(X % 2 == 1){
        for(i = X; i < X + 11; i++){
            if(i % 2 == 1){
                cout << i << endl;
            }
        }
    }

    return 0;
}
