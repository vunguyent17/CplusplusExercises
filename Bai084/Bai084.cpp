#include <iostream>
#include <cmath>
#include <math.h>
using namespace std;

int main()
{
	int x, n;
	cout << "Bai 084:" << endl;
	cout << "Nhap x = ";
	cin >> x;

	cout << "Nhap n = ";
	cin >> n;

	float S = 0;
	float T = x;
	int i = 1;

	cout << "S(" << x << "," << n << ")";
	while (i <= n)
	{
		T = sin(T);
		S = S + T;
		i = i + 1;
	}

	cout << " = " << S << endl;
	system("pause");
	return 1;
}