#include <iostream>
using namespace std;

int main()
{
	int n;
	cout << "Bai 031:" << endl << "Nhap n = ";
	cin >> n;

	float S = 0;
	float i = 1;
	cout << "S(" << n << ") = ";
	while (i <= 2 * n +1)
	{
		S = S + float(1) / i;

		cout << "1/" << i;
		if (i < 2 * n+1) {
			cout << " + ";
		}

		i = i + 2;
	}

	cout << " = " << S << endl;
	system("pause");
	return 1;
}