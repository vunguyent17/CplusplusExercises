#include <iostream>
using namespace std;

int main() {
	cout << "Bai 142: Tim so dao nguoc cua so nguyen duong n" << endl;
	cout << "Nhap n = ";
	int n;
	cin >> n;

	int t = n;
	int dn = 0;
	while (t != 0)
	{
		int dv = t % 10;
		dn = dn * 10 + dv;
		t = t / 10;
	}
	cout << "So dao nguoc cua n la " << dn;
	return 1;
}