#include <iostream>

using namespace std;

int main()
{
    int x, y, z;

    cin >> x >> y >> z;

    if (x > y && y > z){
        cout << z << "\n" << y << "\n" << x  << "\n" << endl;
    }
    else if (x > z && z > y){
        cout << y << "\n" << z << "\n" << x  << "\n" << endl;
    }
    else if (y > z && z > x){
        cout << x << "\n" << z << "\n" << y  << "\n" << endl;
    }
    else if (y > x && x > z){
        cout << z << "\n" << x << "\n" << y  << "\n" << endl;
    }
    else if (z > x && x > y){
        cout << y << "\n" << x << "\n" << z  << "\n" << endl;
    }
    else if (z > y && y > x){
        cout << x << "\n" << y << "\n" << z  << "\n" << endl;
    }
    cout << x << "\n" << y << "\n" << z << endl;

    return 0;
}
