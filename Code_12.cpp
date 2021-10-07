#include <iostream>

using namespace std ;
int main()
{
	int Num1 , Num2 , Temp;
	cout << "Enter Num1 = " ;
	cin >> Num1 ;
	cout << "Enter Num2 = " ;
	cin >> Num2 ;
	Temp = Num1 ;
	Num1 = Num2 ;
	Num2 = Temp ;
	
	cout<<"Num_One = " << Num1 << "\t" << "Num_Two = " << Num2 ;
	
	
}