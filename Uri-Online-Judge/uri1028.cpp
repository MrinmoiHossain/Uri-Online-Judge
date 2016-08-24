#include <iostream>

using namespace std;

int main()
{
    int N, F1, F2, i, b, first, second;

    cin >> N;

    for(i = 0; i < N; i++){
        cin >> F1 >> F2;

        if(F2 > F1){
            first = F2;
            second = F1;
        }
        else{
            first = F1;
            second = F2;
        }

        while(first % second != 0){
            b = first % second;
            first = second;
            second = b;
        }
        cout << second << endl;
    }


    return 0;
}
