// Student Name: Anshuman Patnaik                                    
// Student Number: 20514402                                           
//
// SYDE 121 Lab: 06 Assignment : Number 1
//
// Filename: lab0601.cpp 
// Date submitted: 10/28/2013
//
// I hereby declare that this code, submitted
// for credit for the course SYDE121, is a product
// of my own efforts. This coded solution has
// not been plagiarized from other sources and
// as not been knowingly plagiarized by others.
//
// The following assignment was done using the 
// strucutres which encompasses the bonus section
// as outlined in the assignment handout. 
//*********************************************

#include <iostream>
#include <cmath>
using namespace std;

// defining all roots as a real and imaginary part
struct ROOT
{
	double real_part;
	double imag_part;  
};

//defining three functions with call by reference values for the quadratic formula

void get_inputs (double &a, double &b, double &c); 
// function to obtain inputs

void calculations (double &a, double &b, double &c, ROOT &root);
// function to find the real and imaginary parts of the roots

void output (double &a, double &b, double &c, ROOT &root);
// function to display the output

int main() 
{
	double a = 0.0, b = 0.0, c = 0.0;
	ROOT root = {0.0, 0.0};
	get_inputs (a, b, c);
	calculations (a, b, c, root); 
	output (a, b, c, root); 
	
	return 0;
}

void get_inputs (double &a, double &b, double &c)
{
	cout << "Given a quadratic in the form ax^2 + bx + c = 0.\n" 
		 << "I will give you the root(s) of the quadratic.\n"
		 << "Enter values for a, b and c\n";
	cin >> a >> b >> c; 
}

void calculations(double &a, double &b, double &c, ROOT &root)
 {
	// Breaking the root formula down to its' two seperate parts
	root.real_part = (-b/(2*a));
	root.imag_part = (sqrt (abs((b*b - (4*a*c)))) / (2*a));
	
}

void output (double &a, double &b, double &c, ROOT &root) 
{
	// Local variable of the discriminant  or b^2 - 4ac 
	double discriminant = (b*b - (4*a*c));
	
	//the value of discriminant determines types of roots 
	// if discriminant is greater than 0, two real roots are found
	if (discriminant > 0) {
	cout << "\nRoot 1: " << root.real_part + root.imag_part; 
	cout << "\nRoot 2: " << root.real_part - root.imag_part; 
	}
	
	// if discriminant is equal to 0, two equal and real roots are found
	else if(discriminant == 0) {
	cout << "\nRoot: " << root.real_part + root.imag_part;
	}
	
	// if discriminant is less than 0, two complex roots are found
	else {
	cout << "\nRoot 1: " << root.real_part << " + " << root.imag_part << "i"; 
	cout << "\nRoot 2: " << root.real_part << " - " << root.imag_part << "i";
	}
}
