﻿#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    int a, b;
    cout << "enter number 1:"; cin >> a;
    cout << "enter number 2:"; cin >> b;
    int n;

    for (int n = a; n <= b; n++)
    {


        if (n == 1)
            cout << "one\n";

        if (n == 2)
            cout << "two\n";

        if (n == 3)
            cout << "three\n";

        if (n == 4)
            cout << "four\n";

        if (n == 5)
            cout << "five\n";

        if (n == 6)
            cout << "six\n";

        if (n == 7)
            cout << "seven\n";

        if (n == 8)
            cout << "eight\n";

        if (n == 9)
            cout << "nine\n";
    }
            if
                ((a % 2) == 0)
                cout << "even" << endl;

            if ((a % 2) != 0)
                cout << "odd" << endl;
            if
                ((b % 2) == 0)
                cout << "even" << endl;

            if ((b % 2) != 0)
                cout << "odd" << endl;
   
    return 0;

}