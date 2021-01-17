#include <iostream>
#include <cmath>
using namespace std;

int main() {
	cout << "Bai 023: Tim chu so hang chuc cua mot so" << endl;
	cout << "Nhap mot so = ";
	int n;
	cin >> n;
	int ch = n/10 % 10;
	cout << "Chu so hang chuc = " << ch <<endl;
	system("pause");
	return 1;
}