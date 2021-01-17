// Bai106.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>
#include <math.h>
#include <iomanip>
using namespace std;

int main()
{
	cout << "Bai 106:" << endl;
	cout << "Nhap x = ";
	float x;
	cin >> x;

	double S = x;
	double T = x, M = 1;
	int dau = -1;
	int i = 3, n = 1;
	double e = 1;

	while (e >= pow(10, -6))
	{
		T = T * x * x;
		M = M * ((double)i - 1) * i;
		e = T / M;
		S = S + dau*e;
		dau = -dau;
		n = (i - 1) / 2;
		i = i + 2;
	}

	cout << "sin(" << x << ") = " << setprecision(10) << S << endl;
	cout << "n = " << n << endl;
	system("pause");
	return 1;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file