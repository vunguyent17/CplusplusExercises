// Bai114.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    cout << "Bai 114:" << endl;
    cout << "Nhap n = ";
    int n;
    cin >> n;

    int ahh = -2;
    int at = -2;
    int T1 = 3, T2 = 7;
    int i = 2;

    while (i <= n)
    {
        T1 = T1 * 3;
        T2 = T2 * 7;
        ahh = 5 * at + 2 * T1 - 6 * T2 + 12;
        i = i + 1;
        at = ahh;
    }

    cout << "a" << n << " = " << ahh << endl;
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
