// Bai117.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    cout << "Bai 117:" << endl;
    cout << "Nhap n = ";
    int n;
    cin >> n;

    int att = -1, at = 3;
    int ahh = 0;
    int T = 2, i = 2;

    if (n == 0)
        ahh = -1;
    else if (n == 1)
        ahh = 3;
    else
    {
        while (i <= n)
        {
            T = T * 2;
            ahh = 5 * T + 5 * at - att;
            i = i + 1;
            att = at;
            at = ahh;
        }
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
