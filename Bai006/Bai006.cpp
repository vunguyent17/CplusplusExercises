// Chuong trinh doi do C sang do F
#include <iostream>
using namespace std;

int main() {
	cout << "Bai 006: Chuong trinh doi do C sang do F"<<endl;
	float C, F;
	cout << "C = ";
	cin >> C;
	F = 9*C/5 + 32;
	//F = 9.0 / 5 * C + 32;
	//F = (float)9/5*C + 32;
	//F = float(9)/5*C + 32;
	cout << "F = " << F;
	return 1;
}