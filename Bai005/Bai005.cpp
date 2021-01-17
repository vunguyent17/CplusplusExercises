#include <iostream>
#include <cmath>
using namespace std;

int main() {
	cout << "Bai 005: Tinh the tich hinh cau voi ban kinh r" << endl;
	float r;
	cout << "Nhap ban kinh hinh cau = ";
	cin >> r;
	float V = (float)4/3 * 3.1415 * r * r *r;
	cout << "The tich hinh cau = " << V;
	return 1;
}