#include <iostream>
#include <cmath>
#include <iomanip>
#include "coord.h"
using namespace std; 

//Input Function
void get_point (POINT3D &point)
 {	
 //User input for user id, x-coordinante, y-coordinante, z-coordinante, and order
 //Each of the values are echoed back to the user
	cout << "\nEnter the point's ID record: "; 
	cin >> point.id_record; 
	cout << "The ID Record is " << point.id_record << endl << endl
	
		 << "Enter the point's x-coordinate: ";
	cin >> point.x_coord;
	cout << "The x_coordinate is " << point.x_coord << endl << endl
	
	 << "Enter the point's y-coordinate: ";
	cin >> point.y_coord;
	cout << "The y_coordinate is " << point.y_coord << endl << endl
	
	 << "Enter the point's z-coordinate: ";
	cin >> point.z_coord;
	cout << "The z_coordinate is " << point.z_coord << endl << endl 
	
	     << "Enter the desired order from the following options: "
		 << endl << "A = High Accuracy"
		 << endl << "B = Medium Accuracy"
		 << endl << "C = Low Accuracy" << endl; 
	cin >> point.order; 	
	cout << "You have entered an order of " << point.order << endl << endl << endl; 
}

//Print function
void print_print (const POINT3D &point)
{
	cout << endl
		 << left << setw(15) << "Point ID:" 
		 << left << setw (15) << point.id_record << endl
		 << left << setw (15) << "X-coordinate:" 
		 << left << setw (15) << point.x_coord << endl
		 << left << setw (15) << "Y-coordinate:" 
		 << left << setw (15) << point.y_coord << endl
		 << left << setw (15) << "Z-coordinate:" 
		 << left << setw (15) << point.z_coord << endl
		 << left << setw (15) << "Classification:" 
		 << left << setw (15) << point.order << endl << endl;
}

//Distance in 3-d between the two points
double spatial_dist (POINT3D &pointa, POINT3D &pointb)
{
	double spatial_dist = 0.0, 
		   x_difference = 0.0, 
		   y_difference = 0.0, 
		   z_difference = 0.0; 

	x_difference = pointb.x_coord - pointa.x_coord;
	y_difference = pointb.y_coord - pointa.y_coord;
	z_difference = pointb.z_coord - pointa.z_coord;
	
	spatial_dist = sqrt((x_difference*x_difference) + (y_difference*y_difference) + (z_difference*z_difference));
	
	return spatial_dist; 
}

//Planar distance between the two points
double plani_dist (POINT3D &pointa, POINT3D &pointb)
{
	double plani_dist = 0.0, 
		   x_difference = 0.0, 
		   y_difference = 0.0;
		 
	x_difference = pointb.x_coord - pointa.x_coord;
	y_difference = pointb.y_coord - pointa.y_coord;
	
	plani_dist = sqrt((x_difference*x_difference) + (y_difference*y_difference));
	
	return plani_dist; 
}

//Height Difference
double ht_diff (POINT3D &pointa, POINT3D &pointb)
{
	double ht_diff = pointb.z_coord - pointa.z_coord; 
	
	return ht_diff;
}

//Azimuth of the points
double azimuth (POINT3D &pointa, POINT3D &pointb)
{
	double azimuth_rads = 0.0, 
		   azimuth_degrees = 0.0,
		   x_difference = 0.0, 
		   y_difference = 0.0;
		 
	x_difference = pointb.x_coord - pointa.x_coord;
	y_difference = pointb.y_coord - pointa.y_coord;
	
	if (y_difference >= 0) 
	azimuth_rads = atan2 (y_difference,x_difference);
	
	else 
	azimuth_rads = atan (y_difference/x_difference) - (M_PI); 
	
	azimuth_degrees = (azimuth_rads * 180) / M_PI; 
	
	return azimuth_degrees;
}





