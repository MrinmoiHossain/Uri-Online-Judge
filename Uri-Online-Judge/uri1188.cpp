#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    char O;
    int i, j, first = 5, last = 6;
    double x, sum = 0;
    double M[12][12];

    cin >> O;

    for(i = 0; i < 12; i++){
        for(j = 0; j < 12; j++){
            cin >> x;
            M[i][j] = x;
        }
    }

    for(i = 7; i < 12; i++){
        if(first > 0 && last < 11){
            for(j = first; j < (last+1); j++){
                sum += M[i][j];
            }
        }
        first--;
        last++;
    }

    if(O == 'S'){
        cout << fixed << setprecision(1) << sum << endl;
    }
    else{
       cout << fixed << setprecision(1) << sum/30 << endl;
    }

    return 0;
}

