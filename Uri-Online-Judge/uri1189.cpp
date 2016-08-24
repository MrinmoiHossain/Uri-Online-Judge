#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    char O;
    int i, j;
    double sum = 0;
    double M[12][12];

    cin >> O;

    for(i = 0; i < 12; i++){
        for(j = 0; j < 12; j++){
            cin >> M[i][j];

            if(j < (11 - i) && j < i){
                sum += M[i][j];
            }
        }
    }

    if(O == 'S'){
        cout << fixed << setprecision(1) << sum << endl;
    }
    else{
       cout << fixed << setprecision(1) << sum/30 << endl;
    }

    return 0;
}

