#include <iostream>

using namespace std;

int main()
{
	long int a, b, a1, b1, c, carry, result;

	while (cin >> a >> b && (a || b))
	{
		carry = c = 0;

		while (a != 0 || b != 0)
		{
			a1 = a % 10;
			a = a / 10;
			b1 = b % 10;
			b = b / 10;

			result = a1 + b1 + c;
			if (result >= 10){
				c = 1;
				carry += 1;
			}
			else
				c = 0;
		}

		if (carry == 0){
			cout << "No carry operation." << endl;
		}
		else if (carry == 1){
			cout << carry << " carry operation." << endl;
		}
		else if (carry > 1){
			cout << carry << " carry operations." << endl;
		}
	}
	return 0;
}
