// Fibonacci series
#include <iostream>
using namespace std;

unsigned int Fibonacci(unsigned int Number)
{

	if (Number == 0 || Number == 1)
		return Number;
	else
	{
		unsigned int newFibonacci = Fibonacci(Number - 1) + Fibonacci(Number - 2);
		return newFibonacci;
	}

}
int main()
{
	unsigned int NumberFibonacci = 0;
	cout << "Enter The NumberFibonacci:";
	cin >> NumberFibonacci;
	for (int i = 0; i < NumberFibonacci; i++)
	{
		cout << "Fibonacci(" << i << ")=  ";
		cout << Fibonacci(i) << "\n";

	}


}

