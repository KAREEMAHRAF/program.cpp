#include <iostream>

using namespace std ;
int main()
{
	int Num1 , Num2 ;
	cout<<"Enter Num1 = " ;
	cin >> Num1 ;
	cout<<"Enter Num2 = " ;
	cin >> Num2 ;
	
	if(Num1==Num2)
	{
		cout<<"Num1 = Num2 " ;
	}
	else if(Num1>Num2)
	{
		cout<<"Num1 > Num2 " ;
	}
	else if(Num1<Num2)
	{
		cout<<"Num1 < Num2 " ;
	}
	
	
}