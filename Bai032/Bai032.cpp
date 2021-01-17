#include <iostream>
using namespace std;

int main()
{
	int n;
	cout << "Bai 032:" << endl << "Nhap n = ";
	cin >> n;

	float S = 0;
	int i = 1, M;
	cout << "S(" << n << ") = ";
	while (i <= n)
	{
		M = i * (i + 1);
		S = S + float(1) / M;

		cout << "1/(" << i << "x" << i + 1 << ")";
		if (i < n) {
			cout << " + ";
		}

		i = i + 1;
	}

	cout << " = " << S << endl;
	system("pause");
	return 1;
}