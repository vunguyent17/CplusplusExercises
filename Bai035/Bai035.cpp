	#include <iostream>
	using namespace std;

	int main()
	{
		int n;
		cout << "Bai 035:" << endl << "Nhap n = ";
		cin >> n;

		float T = 1;
		int i = 1;
		cout << "T(" << n << ") = ";
		while (i <= n)
		{
			T = T * i;

			cout << i;
			if (i < n) {
				cout << " x ";
			}

			i = i + 1;
		}

		cout << " = " << T << endl;
		system("pause");
		return 1;
	}