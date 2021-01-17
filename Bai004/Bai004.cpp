#include <iostream>
#include <cmath>
using namespace std;

int main() {
	cout << "Bai 004: Tinh dien tich xung quanh hinh cau voi ban kinh r" << endl;
	float r;
	cout << "Nhap ban kinh hinh cau = ";
	cin >> r;
	float dt = 4 * 3.1415 * r * r;
	cout << "Dien tich xung quanh hinh cau = " << dt;
	return 1;
}