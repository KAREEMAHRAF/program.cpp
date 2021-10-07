/*
   Write a C++ program to read the radius of circle and calculate and print it's area provided that the constant Pi = 3.4159.   
*/

#include <iostream>

using namespace std ;

float Radius_Of_Circle(float Radius);

int main()
{
	float radius ;
	cout << "Enter the radius of circle = " ; 
	cin  >> radius ;
	cout << Radius_Of_Circle(radius);
}


float Radius_Of_Circle(float Radius)
{
	const float Pi   = 3.15159 ;
	      float area           ;
		  
		  area = Pi * Radius * Radius ;
		  
		  return area ;
}