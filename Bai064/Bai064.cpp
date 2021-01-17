#include <iostream>
using namespace std;

int main()
{
	int n, dv;
	cout << "Bai 064: Tim chu so lon nhat cua so nguyen duong n" << endl;
	cout << "Nhap so nguyen duong = ";
	cin >> n;

	int lc = n % 10;
	int t = n;
	while (t != 0)
	{
		dv = t % 10;
		if (dv > lc) {
			lc = dv;
		}
		t = t / 10;
	}
	cout << "Chu so lon nhat la " << lc << endl;
	system("pause");
	return 1;
}