// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
unsigned int  i = 4;
int main()
// stars1
{	/* 

	 *
	 **
	 ***
	 ****
	 *****
	
	*/
	// code stars1
	/*
	for (int x = 0; x <= 5; x++)
	{
		for (int y = 0; y <= x; y++) 
		{
			cout << "*";
		}
		cout << "\n";
	}
	*/
	// stars2
	/*   
	 ******
	 *****
     ****
     ***
     **
     *
	
	*/
	//// code stars2
/*	for (int x = 0; x <= 5; x++)
	{
		for (int y = 5; y > x; y--)
		{
			cout << "*";
		}
		cout << "\n";
	}*/
	//  stars3
    /*  
	      * 
         **
        ***
	   ****
	  ***** 

	*/
	 // code stars3
	/*
	for (int i = 4; i >= 0; i--) {
		
		for (int x = 0; x <= i; x++)
		{
			cout << " ";
		}
		for (int y = 4; y >= i; y--)
		{
			cout << "*";
		}
		cout << "\n";
	}
	*/
	// stars4
	/*  
	      *
	     ***
	    *****
	   ******* 
	  *********
	
	*/
	// code stars4
	/*
	  for (int i = 4; i >= 0; i--)
	{

		for (int x = 0; x <= i; x++)
		{
			cout << " ";
		}
		for (int y = 4; y >= i; y--)
		{
			cout << "*";
		}
		for (int y = 3; y >= i; y--)
		{
			cout << "*";
		}
		cout << "\n";
	}
	*/


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
