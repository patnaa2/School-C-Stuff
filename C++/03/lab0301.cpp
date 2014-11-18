#include <iostream>
#include <cmath>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main( ) {
	
	// Define all the varirables 
	
	int total_number_of_seconds = 0,
		seconds = 0, 
		minutes = 0, 
		hours = 0, 
		days = 0, 
		weeks = 0; 
	
	// Asking for output and input
	
	cout << "Enter the total time needed to be calculated in seconds\n";
	cin >> total_number_of_seconds; 
	
	// Error checking making sure input value is greater than 0
	
	 while (total_number_of_seconds < 0)
	{ cout << "Invalid input entered." << endl;
	cin >> total_number_of_seconds ;  
	}
	
	// Calculations needed to define minutes
	
	minutes = total_number_of_seconds / 60;
	seconds = total_number_of_seconds % 60;	
	
	// Calculations needed to define hours
	
	hours = total_number_of_seconds / 3600;
	minutes = (total_number_of_seconds % 3600) / 60 ;
	
	// Calculations needed to define days 
	
	days = total_number_of_seconds / 86400;
	hours = (total_number_of_seconds % 86400) / 3600 ;
	
	// Calculations needed to define weeks 
	
	weeks = total_number_of_seconds / 604800;
	days = (total_number_of_seconds % 604800) / 86400 ;
		
	// Displayiing the output	

  	cout << "\nThe amount of time you entered is " << total_number_of_seconds << " seconds.\n";
  	cout << "\nThe amount of time expanded is "
	   << weeks << " weeks "
	   << days << " days "
	   << hours << " hours "
	   << minutes << " minutes "
	   << seconds << " seconds." ;


	
	return 0;  
}
	   
	
