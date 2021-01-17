// Bai151.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	cout << "Bai 151: Kiem tra so nguyen duong n co dang 2^m" << endl;
	cout << "Nhap n = ";
	int n;
	cin >> n;
	int flag = 1;
	int t = n;
	while (t > 1)
	{
		if (t % 2 == 1)
			flag = 0;
		t = t / 2;
	}

	if (flag == 1)
		cout << n << " co dang 2^m";
	else
		cout << n << " khong co dang 2^m";
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
