#include <iostream>
using namespace std;

int main()
{
	int x, n;
	cout << "Bai 071:" << endl;
	cout << "Nhap x = ";
	cin >> x;

	cout << "Nhap n = ";
	cin >> n;

	int S = x, T = x;
	int i = 3;

	cout << "S(" << x << "," << n << ") = 2";
	while (i <= 2 * n+1)
	{
		T = T * x * x;
		S = S + T;

		cout << " + "<< x << "^" << i;

		i = i + 2;
	}

	cout << " = " << S << endl;
	system("pause");
	return 1;
}