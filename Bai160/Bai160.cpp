// Bai160.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	cout << "Bai 160: Dem so luong chu so dau tien cua so nguyen duong n" << endl;
	cout << "Nhap n = ";
	int n;
	cin >> n;

	int t = n;
	int dt = t % 10;
	int dem = 0;

	while (t >= 10)
	{
		t = t / 10;
		dt = t;
	}

	t = n;
	while (t != 0)
	{
		int dv = t % 10;
		if (dv == dt)
			dem++;
		t = t / 10;
	}

	cout << "Chu so dau tien cua " << n << " la: " << dt << endl;
	cout << "So luong chu so " << dt << " la: " << dem << endl;
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
