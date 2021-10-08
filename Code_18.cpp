/*
   write a C++ program read Raws and Colms and desply the rectangle.
*/

#include <iostream>

using namespace std ;
int main()
{
	int Raws ,Colms ;
	
	cout<< "Enter the Ram = " ;
	cin >> Raws ;  
	cout<< "Enter the colm = " ;
	cin >> Colms ; 
	
	for(int i=0 ; i<=Raws ;i++)
	{
		for(int j=0 ; j<=Colms ;j++)
	    {
		    cout<<  "*"  ;
			cout<<  " "  ;
		    
		}
		cout<<  "\n" ;
	}
	
	
}