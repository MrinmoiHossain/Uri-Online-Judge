#include <iostream>
#include <cmath>

using namespace std;

int main() {

    int N, x, y, r, b, c, i;

    cin >> N;

    for(i = 0; i < N; i++){
        cin >> x >> y;

        if(x >= 1 && y <= 100){
            r = pow(3 * x, 2) + pow(y,2);
            b = 2 * pow(x,2) + pow(5 * y, 2);
            c = -100 * x + pow(y,3);

            if( r > b && r > c){
                cout<<"Rafael ganhou" << endl;
            }
            else if(b > r && b > c){
                cout<<"Beto ganhou" << endl;
            }
            else if(c > r && c > b){
               cout<<"Carlos ganhou" << endl;
            }
        }
    }

    return 0;
}
