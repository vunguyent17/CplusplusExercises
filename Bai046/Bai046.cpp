#include <iostream>
using namespace std;

int main()
{
	int n;
	cout << "Bai 046:" << endl;
	cout << "Nhap n = ";
	cin >> n;

	float S = 0;
	int i = 1;
	cout << "S(" << n << ") = ";
	while (i <= n)
	{
		S = S + float(1) / ((i+1)*(float)sqrt(i) + i*(float)sqrt(i + 1));
		cout << "1/(" << i+1 << ".sqrt(" << i << ") + " << i << ".sqrt(" << i + 1 << "))";
		if (i < n) {
			cout << " + ";
		}

		i = i + 1;
	}

	cout << " = " << S << endl;
	system("pause");
	return 1;
}