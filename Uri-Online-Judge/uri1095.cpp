#include <iostream>

using namespace std;

int main()
{
    int i = 1, j = 60;

    while(j >= 0){
        cout << "I=" << i << " J=" << j << endl;
        j = j - 5;
        i = i + 3;
    }
    return 0;
}
