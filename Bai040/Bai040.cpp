#include <iostream>
using namespace std;

int main()
{
	int n;
	cout << "Bai 040" << endl;
	cout << "Nhap n = ";
	cin >> n;

	int S = 0;
	int i = 1;
	cout << "S(" << n << ") = ";
	while (i <= n)
	{
		S = S + i * (i +1);

		cout << i << "." << i+1;
		if (i < n) {
			cout << " + ";
		}

		i = i + 1;
	}

	cout << " = " << S << endl;
	system("pause");
	return 1;
}