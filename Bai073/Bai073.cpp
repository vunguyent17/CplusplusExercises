#include <iostream>
using namespace std;

int main()
{
	int x, n;
	cout << "Bai 073:" << endl;
	cout << "Nhap x = ";
	cin >> x;

	cout << "Nhap n = ";
	cin >> n;

	float S = 0;
	int T = 1, M=0;
	int i = 1;

	cout << "S(" << x << "," << n << ") = ";
	while (i <= n)
	{
		T = T * x;
		M = M + i;
		S = S + float(T)/M;

		cout << x << "^" << i << "/" << M;
		if (i < n) {
			cout << " + ";
		}

		i = i + 1;
	}

	cout << " = " << S << endl;
	system("pause");
	return 1;
}