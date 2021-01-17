#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int x, n;
	cout << "Bai 080:" << endl;
	cout << "Nhap x = ";
	cin >> x;

	cout << "Nhap n = ";
	cin >> n;

	int S = 1;
	int T = 1;
	int i = 1;

	cout << "S(" << x << "," << n << ") = 1 + ";
	while (i <= n)
	{
		T = T * x;
		S = S + (i+1)*T;

		if (i != 1) {
			cout << " + ";
		}
		cout << i + 1 << "."<<x << "^" << i;

		i = i + 1;
	}

	cout << " = " << S << endl;
	system("pause");
	return 1;
}