#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char S[15];
    long z, i;

    while(cin >> S){
        if(S == "0"){
            break;
        }
        for(i = 1; i <= strlen(S); i++){
            z *= i;
        }

        cout << z << endl;
    }

    return 0;
}
