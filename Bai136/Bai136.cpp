// Bai136.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <math.h>
#include <cmath>
using namespace std;

int main()
{
	cout << "Bai 136: Liet ke tat ca cac nam nhuan trong doan hai nam [x,y]" << endl;
	cout << "Nhap nam x = ";
	int x;
	cin >> x;

	cout << "Nhap nam y = ";
	int y;
	cin >> y;

	int i = x;
	int count = 0;

	cout << "Cac nam nhuan trong doan hai nam [" << x << "," << y << "] la: ";
	while (i<=y)
	{
		if (i % 4 == 0 && i % 100 != 0 || i % 400 == 0) {
			if (count > 0)
			{
				cout << ", ";
			}
			cout << i;
			count++;
		}
		i++;
	}
	
	cout << endl;
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
