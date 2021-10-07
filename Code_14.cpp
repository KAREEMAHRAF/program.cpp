#include <iostream>

using namespace std ;
int main()
{
	double Meter , Cintemetar , Milemeiter ;
	 cout << "Enter the value of Milemeiter = "; 
	 cin >> Milemeiter ;
	
	Meter = Milemeiter / 1000 ;
	Cintemetar = Meter * 100 ;
	cout<< Meter << "m : " << Cintemetar << "cm : " << Milemeiter <<"mm";
	
	
}