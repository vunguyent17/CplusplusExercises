#include <iostream>
using namespace std;

int main() 
{
	int n;
	cout << "Bai 027:" << endl << "Nhap n = ";
	cin >> n;

	int S = 0, i = 1;
	cout << "S(" << n << ") = ";
	while (i <= n)
	{
		S = S + i;
		cout << i;
		if (i < n) {
			cout << " + ";
		}
		i = i + 1;
	}

	cout << " = " << S<<endl;
	system("pause");
	return 1;
}