#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    cout << fixed << setprecision(1);
    int i, j;
    char O;
    double sum = 0;
    double M[12][12];


    cin>> O;

   for(i = 0; i < 12; i++){
        for(j = 0; j < 12; j++){
            cin >> M[i][j];

            if(j > i){
                sum += M[i][j];
            }
        }
   }

   if(O == 'S'){
    cout << sum << endl;
   }
   else{
    cout << sum / 66 << endl;
   }

    return 0;
}


