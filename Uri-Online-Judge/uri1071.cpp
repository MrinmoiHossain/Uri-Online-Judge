#include <iostream>

using namespace std;

int main()
{
    int X, Y, sum = 0, i;

    cin >> X;
    cin >> Y;

    if(X > Y){
        for(i = Y + 1; i < X; i++){
            if(i % 2 != 0){
                sum = sum + i;
            }
        }
    }
    else if(X < Y){
        for(i = X + 1; i < Y; i++){
            if(i % 2 != 0){
                sum = sum + i;
            }
        }
    }
    else if(X == Y){
        if(X % 2 != 0){
            sum = sum + X;
        }
    }
    cout << sum << endl;

    return 0;
}
