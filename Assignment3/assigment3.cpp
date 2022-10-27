
// assigment3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//إنشاء ألة حاسبة تقوم بجميع العمليات الرياضية والمنطقية حيث يقوم المستخدم بإدخال أول عدد وثاني عدد والعملية التي يريد القيام بها وإظهاره النتيجة.

#include <iostream>
using namespace std;
int x , y , resalt , type;
int number1 = 0b0000;
int number2 = 0b0000;
string operation;
int main()
{
    cout << "اChoose the mode of operation\n";
    cout << "1.normal\n";
    cout << "2. logical\n ";
    cin >> type;

    if (type==1)
    {
        cout << "enter x=";
        cin >> x;"\n";
        cout << "operation";
        cin >> operation; "\n";
        cout << "enter y=";
        cin >> y; "\n";
    
    if (operation ==  "+" )
    {
        resalt = x + y;
        cout << "resalt\t" << resalt;
    }
    else if (operation == "-")
    {
        resalt = x - y;
        cout << "resalt\t" << resalt;
    }
    else if (operation == "*")
    {
        resalt = x * y;
        cout << "resalt\t" << resalt;
    }
    else if (operation == "/" && y!=0)
    {
        resalt = x / y;
        cout << "resalt\t" << resalt; 
    }  else if (operation == "/" && y == 0)
    {
      
        cout << "error\t"; 
    }
    else if (operation == "%")
    {
        resalt = x % y;
        cout << "resalt\t" << resalt;
    }
    }
    else if (type == 2)
    {
        cout << "enter number1=";
        cin >> number1; "\n";
        cout << "operation";
        cin >> operation; "\n";
        cout << "enter number2=";
        cin >> number2; "\n";
        
        if (operation == "+")
        {
            resalt = number1 + number2;
            cout << "resalt\t" << resalt;
        }
        else if (operation == "-")
        {
            resalt = number1 - number2;
            cout << "resalt\t" << resalt;
        }
        else if (operation == "*")
        {
            resalt = number1 * number2;
            cout << "resalt\t" << resalt;
        }
        else if (operation == "/" && y!=0 )
        {
            resalt = number1 / number2;
            cout << "resalt\t" << resalt;
        }
        else if (operation == "/" && y==0)
        {
            
            cout << "error\t";
        }
        else if (operation == "%")
        {
            resalt = number1 % number2;
            cout << "resalt\t" << resalt;
        }

        else if (operation == "&")
        {
            resalt = number1 & number2;
            cout << "resalt\t" << resalt;
        }
        else if (operation == "|")
        {
            resalt = number1 & number2;
            cout << "resalt\t" << resalt;
        }
        else if (operation == "^")
        {
            resalt = number1 & number2;
            cout << "resalt\t" << resalt;
        }

    }
    return 0;
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
