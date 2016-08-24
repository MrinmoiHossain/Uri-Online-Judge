#include <iostream>

using namespace std;

int main()
{
    int N, i, X, j;

    cin >> N;

    for(i = 0; i < N; i++){
        cin >> X;
        int total = 0;

        for(j = 1; j <= X; j++){
            if(X % j == 0){
                total++;
            }
        }
        if(total == 2){
            cout << X << " eh primo" << endl;
        }
        else{
           cout << X << " nao eh primo" << endl;
        }
    }

    return 0;
}
