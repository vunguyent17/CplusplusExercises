#include <iostream>
using namespace std;

int main()
{
	int n, dv;
	cout << "Bai 062: Tinh tong cac chu so chan cua so nguyen duong n" << endl;
	cout << "Nhap so nguyen duong = ";
	cin >> n;

	int S = 0, t = n;
	while (t != 0)
	{
		dv = t % 10;
		if (dv % 2 == 0) {
			S = S + dv;
		}
		t = t / 10;
	}
	cout << "Tong cac chu so chan = " << S << endl;
	system("pause");
	return 1;
}