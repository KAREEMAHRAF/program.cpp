/*
   write a C++ program read number and get Factorial it .
*/

#include <iostream>

using namespace std ;
int main()
{
	double Num1 , Factorial = 1 ;
	cout << "Enter the number = " ;
	cin>>Num1 ;
	for(int i=1 ; i<=Num1 ;i++)
	{
		Factorial = Factorial * i ;
	}
	cout <<Factorial ;
	
}