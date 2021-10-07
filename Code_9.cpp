/*
    Write a C++ program to calculate sum and average between three numbers . 
*/

#include <iostream>

using namespace std ;

int main()
{
	int Num1 , Num2 , Num3 , Sum;
	float Average ;
	
	cout<<"Enter num1 = " ;
	cin >> Num1 ;
    cout<<"Enter num2 = " ;
	cin >> Num2 ;
	cout<<"Enter num3 = " ;
	cin >> Num3 ;
	
	Sum = Num1 + Num2 +Num3 ;
	
	Average = Sum  / 3 ;
	
	cout<< "Sum = " << Sum << "\t" <<"Average = " << Average ;
	
	
}