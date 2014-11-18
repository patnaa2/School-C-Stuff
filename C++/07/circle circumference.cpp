#include <iostream>
#include <cmath>
using namespace std; 

//Structure declaration
struct CIRCLE {
	int centre_x;
	int centre_y;
	int radius;
};

// Function decleration 
void input_circle (CIRCLE &circle1);

int main(int argc, char** argv) {
	
//Variable Declerations 
	CIRCLE circlea;
	double *ptr_circumference = 0;
	CIRCLE *ptr_struct = 0;
	
	input_circle (circlea);
	
	double circumference = 2*M_PI*circlea.radius; 
	
	ptr_circumference = &circumference;
	ptr_struct = &circlea; 
		
	cout << "The value of the variable circumference is " << circumference << endl
		 << "The address of the variable circumference is " << ptr_circumference << endl << endl; 
	
	cout << "The circle's location is (" << circlea.centre_x << "," << circlea.centre_y << ")" << endl 
		 << "The circle's radius is " << circlea.radius
		 << "The address of the circle struct is: " << ptr_struct << endl; 
	
}

void input_circle (CIRCLE &circle1)
{
	do{
	cout << "Please enter the center point of the circle and radius of the circle"
		 << endl << "(format: x, y, radius, in positive integers.)" << endl;
	
	cin >> circle1.centre_x >> circle1.centre_y >> circle1.radius; 
	}
	while (circle1.centre_x < 0 || circle1.centre_y < 0 || circle1.radius < 0 );
}

