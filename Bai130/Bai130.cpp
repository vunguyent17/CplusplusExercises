// Bai130.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <math.h>
#include <cmath>
using namespace std;

int main()
{
	cout << "Bai 130: Tam giac co 3 canh dai x,y,z. Kiem tra tam giac co ton tai hay khong" << endl;
	cout << "Nhap x, y, z" << endl;
	float x, y, z;

	cout << "x = ";
	cin >> x;

	cout << "y = ";
	cin >> y;

	cout << "z = ";
	cin >> z;
	if ((x < y + z && y < z + x && z < x + y) || (abs(x - y) < z && z < x - y))
		cout << "Co ton tai tam giac" << endl;
	else
		cout << "Khong ton tai tam giac" << endl;

	system("pause");
	return 1;;
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
