#include <iostream>

using namespace std;

int main()
{
   int T, R1, R2, i;

        cin >> T;

        if(T <= 1000){
            for(i = 0; i < T; i++){
                cin >> R1 >> R2;

                cout << (R1 + R2) << endl;
            }
        }
    return 0;
}
