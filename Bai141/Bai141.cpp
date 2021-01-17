#include <iostream>
#include <cmath>
using namespace std;

int main() {
	cout << "Bai 141: Tim chu so dau tien cua so nguyen duong n" << endl;
	cout << "Nhap n = ";
	int n, dt;
	cin >> n;

	dt = abs(n);
	while (dt >= 10)
		dt = dt / 10;
	cout << "Chu so dau tien cua n la " << dt;
	return 1;
}