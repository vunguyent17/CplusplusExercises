#include <iostream>
using namespace std;

int main()
{
	int n;
	cout << "Bai 047:" << endl;
	cout << "Nhap n = ";
	cin >> n;

	float S = 0;
	int i = 1;
	cout << "S(" << n << ") = ";
	while (i <= n)
	{
		S = S + sqrt(1 + float(1) / (i * i) + float(1)/((i+1)*(i + 1)));
		cout << "sqrt(1 + 1/(" << i << "^2) + 1/(" << i+1 << "^2))";
		if (i < n) {
			cout << " + ";
		}

		i = i + 1;
	}

	cout << " = " << S << endl;
	system("pause");
	return 1;
}