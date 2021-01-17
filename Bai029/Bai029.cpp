#include <iostream>
using namespace std;

int main()
{
	int n;
	cout << "Bai 029:" << endl << "Nhap n = ";
	cin >> n;

	float S = 0;
	int i = 1;
	cout << "S(" << n << ") = ";
	while (i <= n)
	{
		S = S + 1.0/i;
		
		cout << "1/"<<i;
		if (i < n) {
			cout << " + ";
		}

		i = i + 1;
	}

	cout << " = " << S<<endl;
	system("pause");
	return 1;
}