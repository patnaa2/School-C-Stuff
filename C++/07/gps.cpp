#include <iostream>
#include "coord.h"
using namespace std; 

int main () {
	// Declaration of two points and all their components
	POINT3D point1, point2; 
	
	//User input for Point 1 
	cout << "Getting data for point 1..." << endl;
	get_point (point1);
	
	//User input for Point 2 
	cout << "Getting data for point 2..." << endl;
	get_point (point2); 
	
	//Echoing the values for Point 1 in a different fashion
	cout << "Point 1: " << endl;
	print_print (point1); 
	
	//Echoing the values for Point 2 in a different fashion
	cout << "Point 2: " << endl;	 
	print_print (point2);
	
	//Display of the required distances and angles
	cout << "Spatial distance from " << point1.id_record << " to " << point2.id_record << " is " << spatial_dist (point1, point2) << endl;
	cout << "Planimetric distance from " << point1.id_record << " to " << point2.id_record << " is " << plani_dist (point1, point2) << endl;
	cout << "Height differnce between " << point1.id_record << " to " << point2.id_record << " is " << ht_diff (point1, point2) << endl;
	cout << "Azimuth between " << point1.id_record << " to " << point2.id_record << " is " << azimuth (point1, point2) << endl;
}

 
