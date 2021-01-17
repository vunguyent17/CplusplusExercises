#include <iostream>
#include <cmath>
using namespace std;

int main() {
	cout << "Bai 026: Hoan vi hai so a va b khong dung bien trung gian" << endl;
	cout << "Nhap a = ";
	int a;
	cin >> a;

	cout << "Nhap b = ";
	int b;
	cin >> b;

	a = a + b;
	b = a - b;
	a = a - b;
	cout << "Ket qua:\na = " << a << endl << "b = " << b << endl;
	system("pause");
	return 1; 