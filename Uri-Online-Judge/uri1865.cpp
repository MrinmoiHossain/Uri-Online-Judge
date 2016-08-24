#include <iostream>
#include <string>

using namespace std;

int main()
{
    int C, i, N;
    string name;

    cin >> C;
    for(i = 0; i < C; i++){
        cin >> name >> N;
        if(name == "Thor"){
            cout << "Y" << endl;
        }
        else{
            cout << "N" << endl;
        }
    }

    return 0;
}
