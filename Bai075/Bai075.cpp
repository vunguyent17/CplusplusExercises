#include <iostream>
using namespace std;

int main()
{
	int x, n;
	cout << "Bai 075:" << endl;
	cout << "Nhap x = ";
	cin >> x;

	cout << "Nhap n = ";
	cin >> n;

	float S = 1;
	int T = 1, M = 1;
	int i = 2;

	cout << "S(" << x << "," << n << ") = 1 ";
	while (i <= 2*n)
	{
		T = T * x * x;
		M = M * (i-1) * i;
		S = S + float(T) / M;

		cout << " + ";
		cout << x << "^" << i << "/" << i << "!";

		i = i + 2;
	}

	cout << " = " << S << endl;
	system("pause");
	return 1;
}