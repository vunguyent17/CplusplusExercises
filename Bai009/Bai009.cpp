#include<iostream>
using namespace std;
#include <math.h>       /* sin */

int main()
{
	cout << "Bai 009: Tinh dien tich cua da giac deu n canh noi tiep trong duog tron ban kinh r" << endl;
	int n;
	float r, dt;

	cout << "Nhap so canh cua da giac deu n = ";
	cin >> n;

	cout << "Nhap ban kinh duong tron r = ";
	cin >> r;

	dt = 1.0/2 * n * r * r * sin(2*3.14159265 / n);
	cout << "Dien tich cua da giac = " << dt << endl;
	system("pause");
	return 1;
}