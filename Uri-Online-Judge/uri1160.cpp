#include <iostream>

using namespace std;

int main()
{
    int T, PA, PB, cont, i;
	double G1, G2;


	cin >> T;

	for(int i = 0; i < T; i++){
		cont = 0;
		cin >> PA >> PB >> G1 >> G2;

		while(PA <= PB && cont <= 100){
			cont++;
			PA += (PA * (G1 / 100));
			PB += (PB * (G2 / 100));
		}

		if(cont > 100){
			cout << "Mais de 1 seculo." << endl;
		}
		else{
			cout << cont << " anos." << endl;
		}
	}

	return 0;
}
