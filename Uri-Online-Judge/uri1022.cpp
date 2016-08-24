#include <iostream>

using namespace std;

int myFunction(int a, int b);

int main()
{
    char c1, c2, c3;
	int N, N1, N2, D1, D2, num, den, numS, denS, e, i;

    cin >> N;

    for(i = 0; i < N; i++){
        cin >> N1 >> c1 >> D1 >> c2 >> N2 >> c3 >> D2;

        if(c2 == '+'){
            num = ((N1 * D2) + (N2 * D1));
			den = (D1 * D2);
        }
        else if(c2 == '-'){
            num = ((N1 * D2) - (N2 * D1));
			den = (D1 * D2);
        }
        else if(c2 == '*'){
            num = (N1 * N2);
			den = (D1 * D2);
        }
        else{
            num = (N1 * D2);
			den = (N2 * D1);
        }

        e = myFunction(num, den);
        numS = num / e;
        denS = den / e;

        if(numS > 0 && denS > 0){
            cout << num << "/" << den << " = " << numS << "/" << denS << endl;
        }
        else if(denS < 0){
            denS = -denS;
            numS = -numS;

            cout << num << "/" << den << " = " << numS << "/" << denS << endl;
        }
    }

	return 0;
}

int myFunction(int a, int b)
{
	int divisor, dividendo, c;

	if(a == 0)
		return 1;

	if(b > a){
		dividendo = b;
		divisor = a;
	}else{
		dividendo = a;
		divisor = b;
	}

	while(dividendo % divisor != 0)
	{
		c = dividendo % divisor;
		dividendo = divisor;
		divisor = c;
	}
	return divisor;
}
