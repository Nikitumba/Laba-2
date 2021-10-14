#include <iostream>
using namespace std;

int main()
{
	int a = 1;
	int b = 1;
	int tmp;

	int A = 0;
	
	
	cin >> A;
	while (a + b < A) {
		if (b % 2 == 1) {

			cout << b << endl;

		}
		
		tmp = b;
		b = a + b;
		a = tmp; 

	}
	return 0;

}
