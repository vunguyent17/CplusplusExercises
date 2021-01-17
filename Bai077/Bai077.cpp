#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int n,k;
	cout << "Bai 077:" << endl;
	cout << "Nhap n = ";
	cin >> n;

	cout << "Nhap k = ";
	cin >> k;

	int S = 0;
	int i = 1;

	cout << "S(" << n << "," << k << ") = ";
	while (i <= n)
	{
		S = S + pow(i,k);

		if (i != 1) {
			cout << " + ";
		}
		cout << i << "^" << k;

		i = i + 1;
	}

	cout << " = " << S << endl;
	system("pause");
	return 1;
}