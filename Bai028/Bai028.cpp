#include <iostream>
using namespace std;

int main()
{
	int n;
	cout << "Bai 028:" << endl << "Nhap n = ";
	cin >> n;

	int S = 0, i = 1;
	cout << "S(" << n << ") = ";
	while (i <= n)
	{
		S = S + i*i;
		cout << i<<"^2";
		if (i < n) {
			cout << " + ";
		}
		i = i + 1;
	}

	cout << " = " << S<<endl;
	system("pause");
	return 1;
}