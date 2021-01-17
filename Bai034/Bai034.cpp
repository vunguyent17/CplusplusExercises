#include <iostream>
using namespace std;

int main()
{
	int n;
	cout << "Bai 034:" << endl << "Nhap n = ";
	cin >> n;

	float S = 0;
	int i = 1;
	cout << "S(" << n << ") = ";
	while (i <= 2*n+1)
	{
		S = S + float(i) / (i + 1);

		cout << i << "/" << i + 1;
		if (i < 2*n+1) {
			cout << " + ";
		}

		i = i + 2;
	}

	cout << " = " << S << endl;
	system("pause");
	return 1;
}