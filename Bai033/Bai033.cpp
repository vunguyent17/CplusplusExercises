#include <iostream>
using namespace std;

int main()
{
	int n;
	cout << "Bai 033:" << endl << "Nhap n = ";
	cin >> n;

	float S = 0;
	float i = 1;
	cout << "S(" << n << ") = ";
	while (i <= n)
	{
		S = S + float(i) / (i+1);

		cout << i << "/" << i+1;
		if (i < n) {
			cout << " + ";
		}

		i = i + 1;
	}

	cout << " = " << S << endl;
	system("pause");
	return 1;
}