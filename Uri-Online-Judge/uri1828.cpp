#include <iostream>
#include <cstring>

using namespace std;

int main()
{
	int n;
	string a, b;
	cin >> n;


	for (int i = 1; i <= n; i++)
	{
		cin >> a >> b;
		if(a == b) cout << "Caso #" << i << ": De novo!" << endl;
		else if(a == "tesoura" && b == "papel") cout << "Caso #" << i << ": Bazinga!" << endl;
		else if(a == "papel" && b == "pedra") cout << "Caso #" << i << ": Bazinga!" << endl;
		else if(a == "pedra" && b == "lagarto") cout << "Caso #" << i << ": Bazinga!" << endl;
		else if(a == "lagarto" && b == "Spock") cout << "Caso #" << i << ": Bazinga!" << endl;
		else if(a == "Spock" && b == "tesoura") cout << "Caso #" << i << ": Bazinga!" << endl;
		else if(a == "tesoura" && b == "lagarto") cout << "Caso #" << i << ": Bazinga!" << endl;
		else if(a == "lagarto" && b == "papel") cout << "Caso #" << i << ": Bazinga!" << endl;
		else if(a == "papel" && b == "Spock") cout << "Caso #" << i << ": Bazinga!" << endl;
		else if(a == "Spock" && b == "pedra") cout << "Caso #" << i << ": Bazinga!" << endl;
		else if(a == "pedra" && b == "tesoura") cout << "Caso #" << i << ": Bazinga!" << endl;
		else cout << "Caso #" << i << ": Raj trapaceou!" << endl;
	}
	return 0;
}
