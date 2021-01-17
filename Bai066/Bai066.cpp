#include <iostream>
using namespace std;

int main()
{
	int n, dv;
	cout << "Bai 066: Kiem tra so nguyen duong n co ton tai chu so chan hay khong" << endl;
	cout << "Nhap so nguyen duong = ";
	cin >> n;

	int flag = 0;
	int t = n;
	while (t != 0)
	{
		dv = t % 10;
		if (dv %2 ==0) {
			flag = 1;
		}
		t = t / 10;
	}
	if (flag == 1) {
		cout << "Ton tai chu so chan" << endl;
	}
	else {
		cout << "Khong ton tai chu so chan" << endl;
	}

	system("pause");
	return 1;
}