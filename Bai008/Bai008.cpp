/* sin example */
#include<iostream>
using namespace std;
#include <math.h>       /* sin */

int main()
{
	cout << "Tinh goc sin theo do:" << endl;
	double param, result;
	cout << "Nhap goc: " ;
	cin >> param;
	result = sin(param * 3.14159265 / 180);
	cout << "Sine cua " << param << " do la " << result << endl << endl;
	
	cout << "Bai 008: Tinh chu vi cua da giac deu n canh noi tiep trong duog tron ban kinh r" << endl;
	int n;
	float r, P;
	
	cout << "Nhap so canh cua da giac deu n = ";
	cin >> n;

	cout << "Nhap ban kinh duong tron r = ";
	cin >> r;

	P = 2 * n * r * sin(3.14159265 / n);
	cout << "Chu vi cua da giac = " << P << endl;
	system("pause");
	return 1;
}