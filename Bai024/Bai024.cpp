#include <iostream>
#include <cmath>
using namespace std;

int main() {
	cout << "Bai 024: Tim chu so hang tram cua mot so" << endl;
	cout << "Nhap mot so = ";
	int n;
	cin >> n;
	int tr = n / 100 % 10;
	cout << "Chu so hang tram = " << tr << endl;
	system("pause");
	return 1; 
}