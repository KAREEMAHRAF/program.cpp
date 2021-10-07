/*  
    write a C++ program convert meter to cintemeter and milie meter
*/

#include <iostream>


using namespace std ;

int main()
{
	 double Meter , Cintemetar , Milemeiter ;
	 cout << "Enter the value of meter = "; 
	 cin >> Meter ;
	
	Cintemetar = Meter * 100 ;
	Milemeiter = Cintemetar * 100 ;
	cout<< "Cintemetar = " << Cintemetar << "\t" << "Milemeiter = " << Milemeiter ;
}