
#include <iostream>
#include <cmath>
#include <math.h>
#include <iomanip>
using namespace std;

int main()
{
	cout << "Bai 110:" << endl;

	double S = 0;
	int i = 1, dau = 1;
	double e = 1;

	while (e >= pow(10, -6))
	{
		e = double(4) / i;
		S = S + dau*e;
		dau = -dau;
		i = i + 2;
	}

	cout << "pi = " << setprecision(10) << S << endl;
	system("pause");
	return 1;
}
