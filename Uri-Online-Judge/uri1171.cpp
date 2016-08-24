#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	int N, X, counter = 0, i;
	int array [2001];
	int array_copy [2001];

    fill(array, array + 2001, 0);
	cin >> N;

	for(i = 0; i < N; i++){
		cin >> X;
		array[X] += 1;
	}

	for(i = 0; i < 2001; i++){
		if(array[i] != 0){
			cout << i << " aparece " << array[i] << " vez(es)" << endl;
		}
	}
	return 0;
}

