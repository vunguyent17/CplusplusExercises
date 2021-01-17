#include <iostream>
using namespace std;

int main()
{
	int n, dv;
	cout << "Bai 063: Tinh tich cac chu so le cua so nguyen duong n" << endl;
	cout << "Nhap so nguyen duong = ";
	cin >> n;

	int T=1, t = n;
	while (t != 0)
	{
		dv = t % 10;
		if (dv % 2 == 1) {
			T = T * dv;
		}
		t = t / 10;
	}
	cout << "Tich cac chu so le = " << T << endl;
	system("pause");
	return 1;
}