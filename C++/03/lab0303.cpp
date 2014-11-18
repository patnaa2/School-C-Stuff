//*********************************************
// Student Name: Anshuman Patnaik                                    
// Student Number: 20514402                                           
//
// SYDE 121 Lab: 03	 Assignment: Wind Chill Index
//
// Filename: LAB0202.cpp 
// Date submitted: 10/02/2013
//
// I hereby declare that this code, submitted
// for credit for the course SYDE121, is a product
// of my own efforts. This coded solution has
// not been plagiarized from other sources and
// as not been knowingly plagiarized by others.
//
//*********************************************

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

#include <iostream>
#include <cmath>
using namespace std;

int main(int argc, char** argv) {
	
	// The following statements define all the necessary variables and constant in both the output and calcuation units
	
	double temp_cel = 0.0,
		   temp_fah = 0.0,
		   wind_sp_kmh = 0.0,
		   wind_sp_mph = 0.0,
		   wind_chill_cel = 0.0,
		   wind_chill_fah = 0.0;
		   
	// The following asks the users for the input of temperature and wind in celsius and km/h respectively 
	
	cout << "Please enter the temperature in Celsius." << endl ; 
	cin >> temp_cel ; 
	
	cout << "Please enter the wind speed in Kilometers per hour." << endl; 
	cin >> wind_sp_kmh ; 
	
	// The following lists the calculations converts the temperature into farehenight and wind speed into miles per hour
	
	temp_fah = ((1.8 * temp_cel) + 32) ;
	wind_sp_mph = (wind_sp_kmh * 0.6215);		
	
	// The following shows all the wind chill values 3 different cases as wind chill depends on the intensity of the wind.
	// But wind speed must be positive and hence an error message must be displayed when a negative value for wind is entered.
	
	if 	(wind_sp_mph < 0) {
		
		cout << "Invalid input provided." << endl << endl; 
	}
	
	else if ((wind_sp_mph >= 0) && (wind_sp_mph <= 4)) {
		
		wind_chill_fah = temp_fah; 
	}
	
	else if ((wind_sp_mph > 4) && (wind_sp_mph <= 45)) {
		
		wind_chill_fah = 91.4 - ((10.45 + ((6.69*sqrt(wind_sp_mph)) - (0.447 * wind_sp_mph)))* ((91.4 - temp_fah)/22.0)) ;
	}
	
	else {
	
		wind_chill_fah = 1.6 * temp_fah - 55.0 ;
	}
	
	// The wind chill has to be converted into Celsius values
	
	wind_chill_cel = ((wind_chill_fah - 32)/1.8) ;
	
	// The original values have to be echoed back to confirm the user's choices and the following displays the windchill value in celsius
	
	cout << "You entered a temperature of " << temp_cel << " degrees Celsius and a wind speed of " << wind_sp_kmh << " km/h.";
	cout << endl << endl; 
	cout << "The wind chill value is " << wind_chill_cel << " Celsius." ; 
	
	system("pause")

	return 0;
}
