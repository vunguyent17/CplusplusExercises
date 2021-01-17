#include <iostream>
using namespace std;

int main()
{
	int n;
	cout << "Bai 039:" << endl << "Nhap n = ";
	cin >> n;

	float S = 1;
	int i = 1;
	cout << "S(" << n << ") = ";
	while (i <= n)
	{
		S = S * (1+float(1)/(i*i));

		cout << "(1 + 1/(" << i << "^2))" ;
		i = i + 1;
	}

	cout << " = " << S << endl;
	system("pause");
	return 1;
}