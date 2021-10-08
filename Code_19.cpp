/*
   write a C++ program read ten integer number and print smalist one.
*/

#include <iostream>

using namespace std ;
int main()
{
	int Numbers[9]={0};
	int temp=0 ;
	cout<<"Enter ten integer number = ";
	for(int i=0 ; i<=9 ;i++)
	{
		cin>>Numbers[i] ;
		temp = Numbers[i];
		for(int j=0 ; j<=9 ;j++)
		{
			if(temp>Numbers[j])
			{
				temp=Numbers[j];
			}
			
			
			
			
			
		}
		
	}
	
	cout<<"smalest number is = "<<temp;
}