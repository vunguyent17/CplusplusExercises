#include <iostream>
#include <cmath>
using namespace std;

int main() {
	cout << "Bai 025: Hoan vi hai so a va b" << endl;
	cout << "Nhap a = ";
	int a;
	cin >> a;
	
	cout << "Nhap b = ";
	int b;
	cin >> b;
	
	int c = a;
	a = b;
	b = c;
	cout << "Ket qua:\na = " << a << endl << "b = " << b << endl ;
	system("pause");
	return 1;
}