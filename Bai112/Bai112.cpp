// Bai112.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>
#include <math.h>
#include <iomanip>
using namespace std;

int main()
{
    cout << "Bai 112: Tim pi do chinh xac 10^-6" << endl;
    double S = 0;
    float e = 1;
    int i = 0;
    long M = 1;

    while (e>=pow(10,-6))
    {
        if (i>0)
            M = M * 16;
        e = float(1) / M * (float(4) / (8 * i + 1) - float(2) / (8 * i + 4) 
            - float(1) / (8 * i + 5) - float(1) / (8 * i + 6));
        S = S + e;
        i++;
    }

    cout << "pi = " << setprecision(10) << S << endl;
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
