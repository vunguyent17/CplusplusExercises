#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int x, n;
	cout << "Bai 081:" << endl;
	cout << "Nhap x = ";
	cin >> x;

	cout << "Nhap n = ";
	cin >> n;

	float S = 0;
	int T = 1;
	int i = 0;

	cout << "S(" << x << "," << n << ") = ";
	while (i <= n)
	{
		T = T * (x + i);
		S = S + float(1)/T;

		if (i != 0) {
			cout << " + ";
		}
		cout << "1/" << T;

		i = i + 1;
	}

	cout << " = " << S << endl;
	system("pause");
	return 1;
}