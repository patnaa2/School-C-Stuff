#include <iostream>
#include <cmath>
using namespace std; 

// Constant vairable PI needed for conversion between degrees and radians
const double PI = 4.0 * atan (1); 

// 5 function declarations with some call by reference variables in the void functions
// as those variables are outputed by the void function
void get_input (double &vel_plane_air, double &vel_air_ground, double &distance, int &direction_compass);
// The following 3 functions return a value into the main function
double get_direction_angle (int &direction_compass);
double get_adjusted_bearing (double &vel_plane_air, double &vel_air_ground, double direction_angle);
double get_adjusted_travel_time (double &vel_plane_air, double &distance, double direction_angle, double adjusted_bearing);
// The following function displays the output
void display_output (double adjusted_bearing, double travel_time);

int main(int argc, char** argv)
 {
	// Decleration of variables in the main
	// Includes both the call-by-reference and return values from 
	// the functions that return a double value
	double vel_plane_air = 0.0; 
	double vel_air_ground = 0.0; 
	double distance = 0.0;
	int direction_compass = 0; 
	double direction_angle = 0.0; 
	double adjusted_bearing = 0.0;
	double travel_time = 0.0; 
	
	//The main runs the 5 functions with the inputs
	// The input comapss direction's angle is returned in the second function.
	// The adjusted bearing is returned in the third function. 
	// The total travel time is returned in the fourth funtion. 
	get_input (vel_plane_air, vel_air_ground, distance, direction_compass); 
	direction_angle = get_direction_angle (direction_compass); 
	adjusted_bearing = get_adjusted_bearing (vel_plane_air, vel_air_ground, direction_angle);	
	travel_time = get_adjusted_travel_time (vel_plane_air, distance, direction_angle, adjusted_bearing);
	display_output (adjusted_bearing, travel_time); 
	
	return 0;
}

void get_input (double &vel_plane_air, double &vel_air_ground, double &distance, int &direction_compass) 
{
	// Declaring local variables to get_input function
	double wind_speed = 0.0; 
	int wind_direction = 0;
	//Program Description
	//Note all input values are then echoed back to the user in this 
	//function except the direction, which is echoed in the following function
	cout << "The program will compute the necessary heading adjustment "
		 << "\nfor your flight, and provide the estimated flight time." << endl;
	//Asking user for cruising speed of plane
	cout << endl << "Enter the aircraft cruising speed in still air (in km/h): ";
	cin >> vel_plane_air; 
	cout << "Cruising speed: " << vel_plane_air << endl; 
	//Asking user for wind speed
	cout << "\nEnter the wind speed in km/h: ";
	cin >> wind_speed;
	cout << "wind speed = " << wind_speed << endl;
	//Asking user for wind direction
	cout << "\nEnter 1 if wind is blowing from the west." << endl
	  	 << "Enter -1 if wind is blowing from the east:  "; 
	cin >> wind_direction;
	//Cases for echoing user's wind direction choice
		if (wind_direction == 1)
			cout << "The wind is blowing from the west." << endl;
		else 
			cout << "The wind is blowing from the east." << endl;
	//Defining the vector describing the wind
	vel_air_ground = wind_direction * wind_speed ; 
	//Asing user for distance between destinations
	cout << "\nEnter the distance between the originating and destination"
	 	 << "\ncities, in km: "; 
	cin >> distance; 
	cout << "Flight distance = " << distance << endl; 
	//Asking user for the compass direction from start point 
	//to arrival
	cout << "\nEnter the compass direction of the destinantion, "
		 << "\nrelative to the originating cities."
	 	 << "\n1: ENE"
		 << "\n2: NE"
		 << "\n3: NNE"
		 << "\n4: N"
		 << "\n5: NNW"
		 << "\n6: NW"
		 << "\n7: WNW"
	     << "\n8: W"
	     << "\n9: WSW"
	     << "\n10: SW"
	     << "\n11: SWS"
	     << "\n12: S"
	     << "\n13: SSE"
	     << "\n14: SE"
	     << "\n15: ESE"
	     << "\n16: E" << endl; 
	cin >> direction_compass; 
}

double get_direction_angle (int &direction_compass)
 {
 	//Converting the compass direction inputed as a menu option
 	// to an angle represented in degrees
	double direction_angle = 0.0; 
	direction_angle = ((360/16.0) * (direction_compass)) ; 
	// Echoing user input value 
	cout << "\nOriginal Flight heading = " << direction_angle << " degrees" << endl; 
	return direction_angle; 	
}

double get_adjusted_bearing (double &vel_plane_air, double &vel_air_ground, double direction_angle)
{
	//Decleration of local variables and return variable
	double direction_angle_rads = 0.0; 
	double adjusted_bearing_rads = 0.0;
	double adjusted_bearing = 0.0;
	double arcsin_argument = 0.0;
	//Changing angles from degrees to radians
	direction_angle_rads = (direction_angle*PI) / 180; 
	//Determining the adjusted bearing
	arcsin_argument = (-1 * vel_air_ground/vel_plane_air);
	adjusted_bearing_rads = direction_angle_rads - asin (arcsin_argument * sin (direction_angle_rads)) ; 
	//Chagning the adjusted bearing back to degrees
	adjusted_bearing = (adjusted_bearing_rads * 180) / PI ;  
	return adjusted_bearing; 
}

double get_adjusted_travel_time (double &vel_plane_air, double &distance, double direction_angle, double adjusted_bearing)
{
	//Declaration of local variables
	double direction_angle_rads = 0.0; 
	double adjusted_bearing_rads = 0.0;
	double adjusted_vel_plane_air = 0.0; 
	double travel_time = 0.0;
	//Changing angle from degrees to radians
	direction_angle_rads = (direction_angle*PI) / 180; 
	adjusted_bearing_rads = (adjusted_bearing*PI) / 180 ;
	//Calculation of adjusted relative speed
	adjusted_vel_plane_air = (vel_plane_air * sin(adjusted_bearing_rads)) / sin (direction_angle_rads);
	//Calculation of new travel time
	travel_time = (distance / adjusted_vel_plane_air);
	return travel_time; 		
}

void display_output (double adjusted_bearing, double travel_time)
{
	// Decleartion of local variables
	double travel_time_hours_output = 0.0;
	double travel_time_minutes_output = 0.0;
	// Seperating the new travel time into hours and minutes
	travel_time_hours_output =  floor(travel_time); 
	travel_time_minutes_output = round(((travel_time - floor(travel_time))*60)); 
	// Output of required values
	cout << "\nYour adjusted flight heading is: " << adjusted_bearing
		 << "\nYour estimated flight time is: " << travel_time_hours_output << " hours and " 
		 << travel_time_minutes_output << " minutes." << endl; 
	
}

