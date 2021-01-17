#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int n;
	cout << "Bai 079:" << endl;

	cout << "Nhap n = ";
	cin >> n;

	int S = 0;
	int T = 1;
	int i = 1;

	cout << "S(" << n << ") = ";
	while (i <= n)
	{
		T = T * i;
		S = S + i*T;

		if (i != 1) {
			cout << " + ";
		}
		cout << i << "." << i <<"!";

		i = i + 1;
	}

	cout << " = " << S << endl;
	system("pause");
	return 1;
}