#include <iostream>
#include <cmath>
using namespace std;

int main() {
	cout << "Bai 021: Tinh x15" << endl;
	int x;
	cout << "Nhap x = ";
	cin >> x;
	int x2 = x * x;
	double x4 = double(x2) * double(x2);
	double x8 = x4 * x4;
	double x16 = x8 * x8;
	double x15 = x16 / x;
	cout << "x15 = " << x15;
	return 1;
}