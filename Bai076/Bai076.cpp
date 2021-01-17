#include <iostream>
using namespace std;

int main()
{
	int x, n;
	cout << "Bai 076:" << endl;
	cout << "Nhap x = ";
	cin >> x;

	cout << "Nhap n = ";
	cin >> n;

	float S = 1 + x;
	int T = x, M = 1;
	int i = 3;

	cout << "S(" << x << "," << n << ") = 1 + " << x;
	while (i <= 2 * n +1)
	{
		T = T * x * x;
		M = M * (i - 1) * i;
		S = S + float(T) / M;

		cout << " + ";
		cout << x << "^" << i << "/" << i << "!";

		i = i + 2;
	}

	cout << " = " << S << endl;
	system("pause");
	return 1;
}