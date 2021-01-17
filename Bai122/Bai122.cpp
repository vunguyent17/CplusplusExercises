// Bai122.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    cout << "Bai 122:" << endl;
    cout << "Nhap n = ";
    int n;
    cin >> n;

    int at = 1, bt = 1;
    int ahh = 1, bhh=1;
    int i = 2;

    while (i <= n)
    {
        ahh = 3 * bt + 2 * at;
        bhh = at + 3 * bt;
        i = i + 1;
        at = ahh;
        bt = bhh;
    }

    cout << "a" << n << " = " << ahh << endl;
    cout << "b" << n << " = " << bhh << endl;
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
