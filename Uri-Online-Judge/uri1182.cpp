#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    cout << fixed << setprecision(1);
    int C, i, j;
    char T;
    double M[12][12], cont = 0;


    cin>> C;
    cin >> T;

   for(i = 0; i < 12; i++){
    for(j = 0; j < 12; j++){
        cin >> M[i][j];

        if(j == C){
            cont = cont + M[i][j];
        }
    }
   }

   if(T == 'S'){
    cout << cont << endl;
   }
   else{
    cout << cont / 12 << endl;
   }

    return 0;
}

