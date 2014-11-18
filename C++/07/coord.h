//*********************************************
// Student Name: Anshuman Patnaik                                    
// Student Number: 20514402                                           
//
// SYDE 121 Lab: 07 Assignment : Number 1
//
// Filename: Lab0701.cpp 
// Date submitted: 11/06/2013
//
// I hereby declare that this code, submitted
// for credit for the course SYDE121, is a product
// of my own efforts. This coded solution has
// not been plagiarized from other sources and
// as not been knowingly plagiarized by others.
//
//*********************************************

#ifndef coord.h
#define coord.h

//Structure declaration
struct POINT3D {
	int id_record; 
	double x_coord; 
	double y_coord;
	double z_coord; 
	char order;
};

//All relevant function declerations
void get_point (POINT3D &point); 
void print_print (const POINT3D &point);
double spatial_dist (POINT3D &pointa, POINT3D &pointb);
double plani_dist (POINT3D &pointa, POINT3D &pointb);
double ht_diff (POINT3D &pointa, POINT3D &pointb);
double azimuth (POINT3D &pointa, POINT3D &pointb); 
#endif
