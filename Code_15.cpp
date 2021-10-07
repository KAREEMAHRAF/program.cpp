/*
   write a C++ program to read three numbers and print the large.
*/

#include <iostream>

using namespace std ;
int main()
{
  int Num1 ,Num2 , Num3 ;
	cout<<"Enter Num1 = " ;
	cin >> Num1 ;
	cout<<"Enter Num2 = " ;
	cin >> Num2 ;
	cout<<"Enter Num3 = " ;
	cin >> Num3 ;
	
	if     ( (Num1>Num2) && (Num1>Num2)  )
	{
		cout<< "The Max Number is number 1 = " << Num1 ;
	}
	else if( (Num2>Num1) && (Num2>Num3)  )
	{
		cout<< "The Max Number is number 2 = " << Num2 ;
	}
	else
	
		cout<< "The Max Number is number 3= " << Num3 ;
	
		
	
	
}