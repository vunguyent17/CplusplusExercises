#include <iostream>
using namespace std;

int main()
{
	int n;
	cout << "Bai 068:" << endl;
	cout << "Nhap so nguyen duong n = ";
	cin >> n;

	int S = 0, T=1;
	int i = 1;

	cout << "S(" <<n<<") = ";
	while (i <= n)
	{
		T = T* i;
		S = S + T;

		cout << i << "!";
		if (i < n) {
			cout << " + ";
		}

		i = i + 1;
	}

	cout << " = " << S << endl;
	system("pause");
	return 1;
}