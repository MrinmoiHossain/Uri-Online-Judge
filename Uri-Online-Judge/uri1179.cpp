#include <iostream>

using namespace std;

int main()
{
    int number[15], par[5], i, j, t = 0;

    for(i = 0; i < 15; i++){
        cin >> number[i];

    }
        for(i = 0, j=0; i < 15; i++){
            if(number[i] % 2 == 0){
                  number[i] = par[j];
                j++;
            }
        }
        for(i = 0; i < 5; i++){
            cout << "par[" << i << "] = " << par[i] << endl;
        }


    return 0;
}
