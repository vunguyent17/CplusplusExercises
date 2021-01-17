#include <iostream>
using namespace std;

int main()
{
	int n,x;
	cout << "Bai 036:" << endl << "Nhap x = ";
	cin >> x;
	cout << "Nhap n = ";
	cin >> n;

	int T = 1;
	int i = 1;
	cout << "T(" << x << "," << n << ") = "<<x<<"^"<<n;
	while (i <= n)
	{
		T = T * x;
		i = i + 1;
	}

	cout << " = " << T << endl;
	system("pause");
	return 1;
}