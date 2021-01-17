#include <iostream>
using namespace std;

int main()
{
	cout << "Bai 001: Khoang cach giua 2 diem (x1,y1) va (x2,y2)" << endl;
	cout << "Nhap x1, y1, x2, y2: ";
	cout << endl;
	int x1, y1, x2, y2;

	cout << "x1 = ";
	cin >> x1;
	
	cout << "y1 = ";
	cin >> y1;
	
	cout << "x2 = ";
	cin >> x2;

	cout << "y2 = ";
	cin >> y2;

	float kc = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
	cout << "Khoang cach giua 2 diem = " << kc;
	return 1;
}