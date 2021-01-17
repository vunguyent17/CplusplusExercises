// Chuong trinh doi do F sang do C
#include <iostream>
using namespace std;

int main() {
	cout << "Bai 007: Chuong trinh doi do F sang do C" << endl;
	float C, F;
	cout << "F = ";
	cin >> F;
	C = 5 * (F - 32) / 9;
	cout << "C = " << C;
	return 1;
}