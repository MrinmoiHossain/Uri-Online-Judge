#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    char O;
    int i, j, first = 1, last = 11;
    double x, sum = 0;
    double M[12][12];

    cin >> O;

    for(i = 0; i < 12; i++){
        for(j = 0; j < 12; j++){
            cin >> x;
            M[i][j] = x;
        }
    }

    for(i = 0; i < 6; i++){
        if(first < last){
            for(j = first; j < last; j++){
                sum += M[i][j];
            }
        }
        first++;
        last--;
    }

    if(O == 'S'){
        cout << fixed << setprecision(1) << sum << endl;
    }
    else{
       cout << fixed << setprecision(1) << sum/30 << endl;
    }

    return 0;
}
