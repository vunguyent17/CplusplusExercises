// Bai162.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	cout << "Bai 162: Kiem tra cac chu so cua so nguyen duong n co giam dan tu trai qua phai khong" << endl;
	cout << "Nhap n = ";
	int n;
	cin >> n;

	int flag = 1;
	int t = n;
	int dvt = t % 10;
	int dv = dvt;

	while (t != 0)
	{
		dvt = dv;
		dv = t % 10;
		if (dv < dvt)
			flag = 0;
		t = t / 10;
	}
	if (flag == 1)
		cout << "Cac chu so cua " << n << " giam dan tu trai qua phai" << endl;
	else
	{
		cout << "Cac chu so cua " << n << " khong giam dan tu trai qua phai" << endl;
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
