#include <iostream>

using namespace std;

int main()
{
    int QT, i, N, M;
    string first, first1, second, second1;

    cin >> QT;

    for(i = 0; i < QT; i++){
        cin >> first >> first1 >> second >> second1;
        cin >> N >> M;

        if((N + M) % 2 == 0){
            if(first1 == "PAR"){
                cout << first << endl;
            }
            else{
                cout << second << endl;
            }
        }
        else{
           if(first1 == "PAR"){
                cout << second << endl;
            }
            else{
                cout << first << endl;
            }
        }
    }

    return 0;
}
