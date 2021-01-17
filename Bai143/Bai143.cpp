#include <iostream>
using namespace std;

int main() {
	cout << "Bai 143: Kiem tra so nguyen duong n co phai so hoan thien hay khong"<< endl;
	cout << "Nhap n = ";
	int n;
	cin >> n;

	int S = 0, i = 1;
	while (i < n)
	{
		if (n % i == 0)
			S = S + i;
		i++;
	}
	if (S == n)
		cout << "Day la so hoan thien";
	else
		cout << "Day khong phai so hoan thien";
	return 1;
}