// Bai126.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    cout << "Bai 126: Tim gia tri lon nhat cua hai so a va b" << endl;
    cout << "Nhap a = ";
    int a;
    cin >> a;

    cout << "Nhap b = ";
    int b;
    cin >> b;

    int max = a;
    if (max < b)
        max = b;

    cout << "Gia tri lon nhat la: " << max << endl;
    system("pause");
    return 1;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
