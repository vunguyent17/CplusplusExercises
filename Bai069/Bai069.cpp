#include <iostream>
using namespace std;

int main()
{
	int x,n;
	cout << "Bai 069:" << endl;
	cout << "Nhap x = ";
	cin >> x;

	cout << "Nhap n = ";
	cin >> n;

	int S = 0, T = 1;
	int i = 1;

	cout << "S(" << x << "," << n << ") = ";
	while (i <= n)
	{
		T = T * x;
		S = S + T;

		cout << x << "^" <<i;
		if (i < n) {
			cout << " + ";
		}

		i = i + 1;
	}

	cout << " = " << S << endl;
	system("pause");
	return 1;
}