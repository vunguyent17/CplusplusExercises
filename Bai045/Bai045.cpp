#include <iostream>
using namespace std;

int main()
{
	int n;
	cout << "Bai 045:" << endl;
	cout << "Nhap n = ";
	cin >> n;

	float S = 0;
	int i = 1;
	cout << "S(" << n << ") = ";
	while (i <= n)
	{
		S = S + float(1) / ((float)sqrt(i) + (float)sqrt(i + 1));
		cout << "1/(sqrt(" << i << ") + sqrt(" << i + 1 << "))";
		if (i < n) {
			cout << " + ";
		}

		i = i + 1;
	}

	cout << " = " << S << endl;
	system("pause");
	return 1;
}