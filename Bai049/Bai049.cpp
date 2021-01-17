#include <iostream>
using namespace std;

int main()
{
	int n;
	cout << "Bai 049: Liet ke cac uoc cua n" << endl;
	cout << "Nhap so nguyen duong n = ";
	cin >> n;

	int i = 1;
	cout << "Cac uoc cua n la: ";
	while (i <= n)
	{
		if (n % i == 0) {
			if (i != 1) {
				cout << ", ";
			}
			cout <<i;
		}
		i = i + 1;
	}

	cout << endl;
	system("pause");
	return 1;
}