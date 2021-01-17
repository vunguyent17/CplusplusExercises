// Bai154.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	cout << "Bai 154: Xuat day mua da cua mot so nguyen duong n" << endl;
	cout << "Nhap n = ";
	int n;
	cin >> n;
	int ahh = n;

	cout << "Day mua da cua " << n << " la: " << n;
	while (ahh != 1)
	{
		if (ahh % 2 == 0)
			ahh = ahh / 2;
		else ahh = 3 * ahh + 1;
		cout << ", " << ahh;
	}
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
