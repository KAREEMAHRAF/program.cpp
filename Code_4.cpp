/*
   Write a C++ program toread the name , basic salary and the  overtime hours ofan employee and compute the employee's net salary as follows
   Taxes = Basic_Salary * Taxr ;
   Gross = Basic_Salary + Overtime_Hours * Overtime_Per_Hour ;
   Net = Gross - Taxes ;
   rate of overtime 35 L.E .
   TAX RATE = 10% .
*/

#include <iostream>

using namespace std ;

void Cout_Name_Calc_Salary(string Name ,float Basic_Salary,float Overtime_Hours );

int main()
{
	string Name ;
	float  Salary , Overtime;
	cout<< "Enter your name = " ;
	cin >> Name ;
	cout<< "Enter your salary = " ;
	cin >> Salary ;
	cout<< "Enter your overtime = " ;
	cin >> Overtime ;
	 Cout_Name_Calc_Salary( Name , Salary, 5 );
	
}


void Cout_Name_Calc_Salary(string Name ,float Basic_Salary,float Overtime_Hours )
{
	
	const float Taxr = 0.1 ;
	const float Overtime_Per_Hour = 35 ;
	
	float Taxes = Basic_Salary * Taxr ;
	float Gross = Basic_Salary + Overtime_Hours * Overtime_Per_Hour ;
	float Net = Gross - Taxes ;
	cout << "name = " << Name << "\n" << "Salary = " << Net ;
	
}