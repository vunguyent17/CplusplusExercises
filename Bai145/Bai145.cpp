// Bai145.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	cout << "Bai 145: Kiem tra so nguyen duong n co phai so chinh phuong hay khong" << endl;
	cout << "Nhap n = ";
	int n;
	cin >> n;
	int flag = 0;
	int i = 1;
	while (i<=n)
	{
		if (n == i * i)
			flag = 1;
		i++;
	}

	if (flag == 1)
		cout << "Day la so chinh phuong";
	else
		cout << "Day khong phai so chinh phuong";
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
