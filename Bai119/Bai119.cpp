// Bai119.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    cout << "Bai 119:" << endl;
    cout << "Nhap n = ";
    int n;
    cin >> n;

    float at = 2;
    float ahh = 2;
    int i = 2;


    while (i <= n)
    {
        ahh = (float)(at * at + 2) / (2 * at);
        at = ahh;
        i++;
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