#include <iostream>
#include <cstdio>
using namespace std;
int greatest(int a, int b, int c, int d);


int main() {
    int a, b, c, d;
    cout << "enter the number1: "; cin >> a;
    cout << "\n enter the number2: "; cin >> b;
    cout << "\n enter the number3: "; cin >> c;
    cout << "\n enter the number4: "; cin >> d;
    cout << greatest(a, b, c, d);

    return 0;
}
int greatest(int a, int b, int c, int d)
{
    int max = 0;
    if (a > b && a > c && a > d) {
        max = a;
    }
    else if (b > a && b > c && b > d) {
        max = b;
    }
    else  if (c > a && c > b && c > d) {
        max = c;
    }
    else  if (d > a && d > b && d > c) {
        max = d;
    }
    return max;

}
