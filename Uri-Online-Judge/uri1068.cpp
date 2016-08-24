#include <iostream>

using namespace std;

int main()
{
    char N[1001];
    int i, count1, count2;

    while(cin >> N){
        count1 = 0;
        count2 = 0;
        for(i = 0; N[i] != '\0'; i++){
            if(N[i] == '(' ){
                count1++;
            }
            else if(N[i] == ')' ){
                count2++;
                if(count1 > 0){
                    count1--;
                    count2--;
                }
            }
        }

        if(count1 == 0 && count2 == 0){
            cout << "correct" << endl;
        }
        else{
            cout << "incorrect" << endl;
        }
    }

    return 0;
}
