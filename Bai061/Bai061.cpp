#include <iostream>
using namespace std;

int main()
{
	int n, dv;
	cout << "Bai 061: Dem so luong chu so le cua so nguyen duong n" << endl;
	cout << "Nhap so nguyen duong n = ";
	cin >> n;

	int dem = 0, t = n;
	while (t != 0)
	{
		dv = t % 10;
		if (dv % 2 == 1) {
			dem++;
		}
		t = t / 10;
	}
	cout << "So luong chu so le cua so nguyen duong n = " << dem << endl;
	system("pause");
	return 1;
}