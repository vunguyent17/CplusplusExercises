#include <iostream>
#include <cmath>
#include <math.h>
using namespace std;

int main()
{
	int x, n;
	cout << "Bai 083:" << endl;
	cout << "Nhap x = ";
	cin >> x;

	cout << "Nhap n = ";
	cin >> n;

	float S = 0;
	float T = 1;
	int i = 1;

	cout << "S(" << x << "," << n << ") = ";
	while (i <= n)
	{
		T = T * x;
		S = S + sin(T);

		if (i != 1) {
			cout << " + ";
		}
		cout << "sin(" << x << "^" << i << ")";

		i = i + 1;
	}

	cout << " = " << S << endl;
	system("pause");
	return 1;
}