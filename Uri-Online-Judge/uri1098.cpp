#include <iostream>

using namespace std;

int main()
{

  for (double i = 0; i <= 2.01; i += 0.2)
    for (double j = 1; j <= 3; j += 1)
      cout << "I=" << i << " J=" << j + i << endl;

  return 0;
}
