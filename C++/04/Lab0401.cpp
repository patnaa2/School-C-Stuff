//*********************************************
// Student Name: Anshuman Patnaik                                    
// Student Number: 20514402                                           
//
// SYDE 121 Lab: 04 Assignment: 2-Dimensional Vector Operations
//
// Filename: LAB0401.cpp 
// Date submitted: 10/11/2013
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
using namespace std; 

int main( ) {
	// variable declaration 
	int x_u1 = 0;
	int y_u1 = 0;
	int x_u2 = 0; 
	int y_u2 = 0;
	int x_v1 = 0;
	int y_v1 = 0;
	int x_v2 = 0; 
	int y_v2 = 0;
	int x_u = 0; 
	int y_u = 0;
	int x_v = 0;
	int y_v = 0;
	int x_u_add_v = 0;
	int y_u_add_v = 0;
	int u_dot_v = 0;
	int u_cross_v = 0;
	int	menu_pick = 0; 
	
	// asking for user input 
	 
	cout << "\nvector u is defined by coordinantes u1 and u2.\n"
		 << "vector v is defined by coordinantes v1 and v2.\n"
		 << "\nFirst enter the x and y coordinantes of u1: ";
		 
	cin >> x_u1 ;
	cout << " " ; 
	cin >> y_u1 ; 
	
	cout << "\nNow enter the x and y coordinantes for u2: "; 
	
	cin >> x_u2 ;
	cout << " " ; 
	cin >> y_u2 ; 
	
	cout << "\nNow enter the x and y coordinantes for v1: "; 
	
	cin >> x_v1 ;
	cout << " " ; 
	cin >> y_v1 ; 
	
	cout << "\nNow enter the x and y coordinantes for v2: "; 
	
	cin >> x_v2 ;
	cout << " " ; 
	cin >> y_v2 ; 
	cout << endl;
	
	// Echoing the input values 
	
	cout << "You have entered the points in the form (x, y):"  << endl 
		 << "U1 = (" << x_u1 << ", " << y_u1 << ")" << endl 
		 << "U2 = (" << x_u2 << ", " << y_u2 << ")" << endl 
		 << "V1 = (" << x_v1 << ", " << y_v1 << ")" << endl 
		 << "V2 = (" << x_v2 << ", " << y_v2 << ")" << endl;
	
	// Defining the vectors 
	
	x_u = x_u2 - x_u1;
	y_u = y_u2 - y_u1; 
	
	x_v = x_v2 - x_v1;
	y_v = y_v2 - y_v1;
	
	// Outputing the vectors 
	
	cout << "\nThe vectors u and v are:\n"
	     << "\nu = " << x_u << " * i + " << y_u << " * j."
	     << "\nv = " << x_v << " * i + " << y_v << " * j."
	     << endl ; 
	
	// Defining all the relevant operations 
	// Vector addition
	
	x_u_add_v = x_u + x_v;
	y_u_add_v = y_u + y_v; 
	
	// Vector Dot product 
		
	u_dot_v = (x_u*x_v) + (y_u*y_v) ; 
	
	// Vector Cross product 
	
	u_cross_v = (x_u*y_v) - (y_u*x_v) ; 
	
	
	// While loop to provide the exit from the menu option 
	
	while (menu_pick != -1){
		// The exit sequence 
		cout << "\nSelect a vector opeartion to perform:"
			 << "\n1. Vector Addition (u + v)"
			 << "\n2. Vector Dot Product (u . v)"
			 << "\n3. Vector Cross Product (u x v)"
			 << "\n\nEnter 1-3 from the menu above, or -1 to exit:"
			 << endl;
			 
		cin >> menu_pick; 
		
		// Defining the cases using switch statement 
		
		switch (menu_pick){
			
			case 1:
				cout << "\nu + v = " << x_u << "i +" << y_u << "j."
					 << endl;
				break;
				
			case 2: 
				cout << "\nu . v = " << u_dot_v
					 << endl; 
				break; 
				
			case 3: 
				cout << "\nu x v = " << u_cross_v
				     << endl; 
				
			default:
				cout << "\nInvalid Selection. Please choose again.\n";
			
		}
			
	}
		
	return 0;
}
