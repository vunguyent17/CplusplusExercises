// Bai089.cpp : This file contains the 'main' function. Program execution begins and ends there.
//


#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int x, n;
	cout << "Bai 089:" << endl;

	cout << "Nhap x = ";
	cin >> x;
	cout << "Nhap n = ";
	cin >> n;

	float S = 0;
	int T = 1, M = 0;
	int dau = -1;
	int i = 1;

	while (i <= n)
	{
		T = T * x;
		M = M + i;
		S = S + dau * float(T) / M;
		dau = -dau;
		i = i + 1;
	}

	cout << "S(" << x << "," << n << ") = " << S << endl;
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
