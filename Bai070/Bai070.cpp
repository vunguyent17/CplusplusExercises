#include <iostream>
using namespace std;

int main()
{
	int x, n;
	cout << "Bai 070:" << endl;
	cout << "Nhap x = ";
	cin >> x;

	cout << "Nhap n = ";
	cin >> n;

	int S = 0, T = 1;
	int i = 2;

	cout << "S(" << x << "," << n << ") = ";
	while (i <= 2*n)
	{
		T = T * x * x;
		S = S + T;

		cout << x << "^" << i;
		if (i < 2*n) {
			cout << " + ";
		}

		i = i + 2;
	}

	cout << " = " << S << endl;
	system("pause");
	return 1;
}