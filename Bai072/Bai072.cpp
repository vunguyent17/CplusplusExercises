#include <iostream>
using namespace std;

int main()
{
	int n;
	cout << "Bai 072:" << endl;
	
	cout << "Nhap n = ";
	cin >> n;

	float S = 0;
	int M = 0;
	int i = 1;

	cout << "S(" << n << ") = ";
	while (i <= n)
	{
		M = M + i;
		S = S + float(1)/M;

		cout << "1/" << M;
		if (i < n) {
			cout << " + ";
		}

		i = i + 1;
	}

	cout << " = " << S << endl;
	system("pause");
	return 1;
}