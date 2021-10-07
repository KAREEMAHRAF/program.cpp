/*
   write a C++ pprograming to clculate and print the sum and average of two number .
*/

#include <iostream>

using namespace std ;

int Sum_Number(int a , int b);

int main()
{
	int x , y ;
	cin >> x >> y ;
	
	Sum_Number( x , y);
	
}

int Sum_Number(int a , int b)
{
	int Sum = a + b ;
	
	int Avradge = Sum / 2 ;
	cout << Sum << "\n" << Avradge ;
	
	return 0 ;
	
}