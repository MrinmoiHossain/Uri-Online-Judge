#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    cout << fixed << setprecision(2);

    int N, Amount = 0, i, rabbit = 0, rat = 0, frog = 0;
    double per_rabbit, per_rat, per_frog;
    char Type;

    cin >> N;

    for(i = 0; i < N; i++){
        cin >> Amount >> Type;


        if(Amount >= 1 && Amount <= 15){
            if(Type == 'C'){
                rabbit = rabbit + Amount;
            }
            else if(Type == 'R'){
                rat = rat + Amount;
            }
            else if(Type == 'S'){
                frog = frog + Amount;
            }
        }
    }
    Amount = rabbit + rat + frog;
    cout << "Total: " << Amount << " cobaias" << endl;
    cout << "Total de coelhos: " << rabbit << endl;
    cout << "Total de ratos: " << rat << endl;
    cout << "Total de sapos: " << frog << endl;
    per_rabbit = (rabbit * 100.0) / Amount;
    cout << "Percentual de coelhos: " << per_rabbit << " %" << endl;
    per_rat = (rat * 100.0) / Amount;
    cout << "Percentual de ratos: " << per_rat << " %" << endl;
    per_frog = (frog * 100.0) / Amount;
    cout << "Percentual de sapos: " << per_frog << " %" << endl;

    return 0;
}

