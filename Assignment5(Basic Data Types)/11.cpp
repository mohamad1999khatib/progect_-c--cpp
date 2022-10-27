#include <iostream>
#include <cstdio>
#include<iomanip>//مكتبة مهمة من اجل اختيار عدد الارقام بعد الفاصلة مع التعليمات يلي تحت 
using namespace std;
int a = 3;
long b = 12345678912345;
char x = 'a';
float d = 334.23245;
double e = 14049.304930000;

int main() {
    // Complete the code.
    cin >> a >> b >> x >> d >> e;
    cout << a << "\n";
    cout << b << "\n";
    cout << x << "\n";
    cout << fixed;
    cout << setprecision(3) << d << "\n";
    cout << setprecision(5) << e << "\n";

}
