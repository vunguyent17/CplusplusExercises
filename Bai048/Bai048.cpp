#include <iostream>
using namespace std;

int main()
{
	int x, n;
	cout << "Bai 048:" << endl;
	cout << "Nhap x = ";
	cin >> x;

	cout << "Nhap n = ";
	cin >> n;

	int S = x;
	int i = 1;
	cout << "S(" << x <<"," << n << ") = " << x;
	while (i <= n)
	{
		S = S * (x+i);

		cout << "(" << x << " + " << i << ")";
		i = i + 1;
	}

	cout << " = " << S << endl;
	system("pause");
	return 1;
}