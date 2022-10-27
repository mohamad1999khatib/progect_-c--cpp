/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
//إنشاء برنامج يقوم المستخدم فيه بإدخال اسم 5 طلاب مع العمر والصف وال ID بحيث يقوم المستخدم بإدخال المعلومات ومن ثم إظهارها

#include <iostream>

using namespace std;

int main()
{
	string name1, name2, name3, name4, name5;
	int age1 = 0, age2 = 0, age3 = 0, age4 = 0, age5 = 0;
	int clase1 = 0, clase2 = 0, clase3 = 0, clase4 = 0, clase5 = 0;
	int id1 = 0, id2 = 0, id3 = 0, id4 = 0, id5 = 0;

	cout << "Enter student data\n";
	cout << "student 1\n";
	cout << "name1:"; cin >> name1;
	cout << "  age1:"; cin >> age1;
	cout << "  clase1:"; cin >> clase1;
	cout << "  id1:"; cin >> id1;


	cout << "student 2"<<endl;
	cout << "name2:"; cin >> name2;
	cout << "  age2:"; cin >> age2;
	cout << "  clase2:"; cin >> clase2;
	cout << "  id2:"; cin >> id2;

	cout << "student 3\n";
	cout << "name3:"; cin >> name3;
	cout << "  age3:"; cin >> age3;
	cout << "  clase3:"; cin >> clase3;
	cout << "  id3:"; cin >> id3;

	cout << "student 4\n";
	cout << "name4:"; cin >> name4;
	cout << "  age4:"; cin >> age4;
	cout << "  clase4:"; cin >> clase4;
	cout << "  id4:"; cin >> id4;

	cout << "student 5\n";
	cout << "name5:"; cin >> name5;
	cout << "  age5:"; cin >> age5;
	cout << "  clase5:"; cin >> clase5;
	cout << "  id5:"; cin >> id5;

	cout << "\n" << "the result\n";
	cout << "student 1\n";
	cout << name1 << "\t";
	cout << age1 << "\t";
	cout << clase1 << "\t";
	cout << id1 << "\t";

	cout << "\n";
	cout << "student 2\n";
	cout << name2 << "\t";
	cout << age2 << "\t";
	cout << clase2 << "\t";
	cout << id2 << "\t";

	cout << "\n";
	cout << "student 3\n";
	cout << name3 << "\t";
	cout << age3 << "\t";
	cout << clase3 << "\t";
	cout << id3 << "\t";

	cout << "\n";
	cout << "student 4\n";
	cout << name4 << "\t";
	cout << age4 << "\t";
	cout << clase4 << "\t";
	cout << id4 << "\t";

	cout << "\n";
	cout << "student 5\n";
	cout << name5 << "\t";
	cout << age5 << "\t";
	cout << clase5 << "\t";
	cout << id5 << "\t";

	return 0;

}