#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int x, n;
	cout << "Bai 085:" << endl;

	cout << "Nhap x = ";
	cin >> x;
	cout << "Nhap n = ";
	cin >> n;

	int S = 0;
	int T = 1;
	int i = 1;
	int dau = 1;

	cout << "S(" << n << ") = ";
	while (i <= n)
	{
		T = T * x;
		S = S + dau* T;

		if (i != 1) {
			if (dau == 1)
				cout << " + ";
			else
				cout << " - ";
		}
		cout << x << "^" << i;

		i = i + 1;
		dau = -dau;
	}

	cout << " = " << S << endl;
	system("pause");
	return 1;
}