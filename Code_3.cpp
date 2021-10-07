#include <iostream>

using namespace std ;


void Time_Cost_Of_Trip(float Distance , float Speed , float K_Per_Gallon);

// Time = Distance / speed ;
// gallon of gas used = Distance / KMS per gallon 
// Cost of the trip = gallon of gas used * cost
//cost oer gallon = 135 L.E .
int main()
{
	
	float Distance , Speed , K_Per_Gallon;
	cout << "Enter the Distance = " ;
	cin >> Distance ; 
	cout << "\n" << "Enter the Speed = " ;
	cin >> Speed ;
	cout << "\n" << "Enter the K_Per_Gallon = " ;
	cin >> K_Per_Gallon ;
	
	Time_Cost_Of_Trip( Distance ,  Speed ,  K_Per_Gallon) ;
} 

void Time_Cost_Of_Trip(float Distance , float Speed , float K_Per_Gallon)
{
	
	float Time        = Distance / Speed ;
	float Dallon_used = Distance / K_Per_Gallon ;
	float Cost        = Dallon_used * 135 ;

    cout << "Time = "<< Time  << "\n" <<	"Cost = " << Cost ;
	
	
}