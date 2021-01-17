// Bai101.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>
#include <math.h>
#include <iomanip>
using namespace std;

int main()
{
	cout << "Bai 101:" << endl;

	float S = 0;
	float e = 1;
	int i = 1, n = 1;

	while (e >= pow(10,-6))
	{
		e = float(1) / i;
		S = S + e;
		n = i;
		i++;
	}

	cout << "S(" << n << ") = " << setprecision(10) << S << endl;
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
