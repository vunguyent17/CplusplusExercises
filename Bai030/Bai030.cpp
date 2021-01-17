#include <iostream>
using namespace std;

int main()
{
	int n;
	cout << "Bai 030:" << endl << "Nhap n = ";
	cin >> n;

	float S = 0;
	float i = 2;
	cout << "S(" << n << ") = ";
	while (i <= 2*n)
	{
		S = S + 1.0 / i;

		cout << "1/" << i;
		if (i < 2*n) {
			cout << " + ";
		}

		i = i + 2;
	}

	cout << " = " << S << endl;
	system("pause");
	return 1;
}