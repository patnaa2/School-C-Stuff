#include <iostream>
#include <cstdlib>
#include <fstream> 
#include "Shape.h"
using namespace std;

Shape::Shape ()
{
	shape_type = SQUARE; 
}

Shape::Shape (Shape_Type newshape_type)
{
	shape_type = newshape_type;  
}

void Shape::defineSize ()
{	
	do
	{
	cout << "Enter the size of the desired square positive integer between 2 and 20." << endl;
	cin >> shape_size;
	}
	while ( shape_size % 2 == 1 || shape_size < 2 || shape_size > 20);
}

void Shape::defineFill ()
{	
	int define_fill_input = 0;

	do{
	cout << "Enter 1 if the shape has a solid fill, or enter 0 if the shape is hollow" << endl;	
	cin >> define_fill_input;
	}
	while (define_fill_input < 0 || define_fill_input >1);
	
	if (define_fill_input == 0)	{
	isFilled = false;
	cout << endl << "The shape is hollow" << endl;
	}
	
	else {
	isFilled = true;
	cout << endl << "The shape is filled" << endl;
	}
	
}

int Shape::getSize ()
{
	return shape_size; 
}

void Shape::setSize (int newshape_size)
{
	shape_size = newshape_size; 
}

void Shape::printFilledShape (ofstream &out_stream)
{
	int row = shape_size, column = shape_size;
	
	for (int m = 0 ; m <= row ; m++) 
	{
		for (int n = 0 ; n <= column; n++) 
		{
				out_stream << "*";
				cout << "*";
		}
	cout << endl;
	out_stream << endl;
	}
	
	cout << endl << endl;
}

void Shape::printHollowShape (ofstream &out_stream)
{
	int row = shape_size-1, column = shape_size-1;
	
for (int m = 0 ; m <= row ; m++) 
	{
		for (int n = 0 ; n <= column; n++) 
		{
			if ((abs(n-column)==0) || ((abs(n-column))==row))
			{
			out_stream << "*";
			cout << "*";
			}
			
			else if (((abs(m-column)==0) || ((abs(m-column))==column)))	
			{
			out_stream << "*"; 
			cout << "*";
			}
			
			else
			{
			out_stream << " ";	 						
			cout << " "; 
			}
		}
	out_stream << endl;
	cout << endl;
	}
}

bool Shape::getIsFilled  ()
{
	return isFilled; 
}

//Inherited function declarations for class Square
Square::Square ()
{
	shape_type = SQUARE; 
}


void Square::defineSize ()
{	
	int size_temp=0;
	
	do{
	cout << "Enter the size of the desired square as an even integer between 2 and 20." << endl;
	cin >> size_temp;
	}
	while ( size_temp % 2 == 1 || size_temp < 2 || size_temp > 20);
	
	setSize(size_temp);
}

void Square::printFilledShape(ofstream &out_stream)
{
	int row = getSize();
	int column = getSize();
	
	for (int m = 0 ; m <= row ; m++) 
	{
		for (int n = 0 ; n <= column; n++) 
		{		
				out_stream << "*";
				cout << "*";
		}
	out_stream << endl;
	cout << endl;
	}
	
	out_stream << endl << endl;
	cout << endl << endl;
}

void Square::printHollowShape (ofstream &out_stream)
{
	int row = getSize()-1;
	int column = getSize()-1;
	
	for (int m = 0 ; m <= row ; m++) 
	{
		for (int n = 0 ; n <= column; n++) 
		{
			if ((abs(n-column)==0) || ((abs(n-column))==row))
			{
			out_stream << "*";
			cout << "*";
			}
			
			else if (((abs(m-column)==0) || ((abs(m-column))==column)))	
			{
			out_stream << "*"; 
			cout << "*";
			}
			
			else
			{
			out_stream << " ";	 						
			cout << " "; 
			}
		}
	out_stream << endl;
	cout << endl;
	}
	
	out_stream << endl << endl;
	cout << endl << endl; 
}


//Inherited Function Declerations for class Diamond
Diamond::Diamond ()
{
	shape_type = DIAMOND; 
}

void Diamond::defineSize ()
{	
	int size_temp=0;
	
	do{
	cout << "Enter the size of the desired diamond as an odd integer between 3 and 19." << endl;
	cin >> size_temp;
	}	
	while (size_temp % 2 == 0 || size_temp < 3 || size_temp > 19);
	
	setSize(size_temp);
}

void Diamond::printFilledShape(ofstream &out_stream)
{
	int row = getSize();
	int column = getSize();
	
	for (int m = -column/2 ; m <= column/2 ; m++) 
		{
		  for (int n = -row/2 ; n<= row/2 ; n++) 
			{
				if ( abs (m) + abs (n) <= row/2){
				out_stream << "*";
				cout << "*";
				}
				
				else{
				out_stream << " ";
				cout << " ";
				}
			}
			out_stream << " ";
			cout << endl;
		}
	
	out_stream << endl << endl;
	cout << endl << endl;
}

void Diamond::printHollowShape (ofstream &out_stream)
{
	int row = getSize();
	int column = getSize();

	for (int m = -column/2 ; m <= column/2 ; m++) 
	{
		for (int n = -row/2 ; n<= row/2 ; n++) 
			{
				if ( abs (m) + abs (n) == row/2){
				out_stream << "*"; 			
				cout << "*";
				}
				
				else{
				out_stream << " ";
				cout << " ";
				}
			}
		out_stream << endl;
		cout << endl;
	}	
	
	out_stream << endl << endl;	
	cout << endl << endl; 
}

//Inherited Function Declerations for class Pyramid
Pyramid::Pyramid ()
{
	shape_type = PYRAMID; 
}

void Pyramid::defineSize ()
{	
	int size_temp=0;
	
	do{
	cout << "Enter the size of the desired pyramid as an odd integer between 3 and 19." << endl;
	cin >> size_temp;
	}
	while (size_temp % 2 == 0 || size_temp < 3 || size_temp > 19);
	
	setSize(size_temp);
}

void Pyramid::printFilledShape(ofstream &out_stream)
{
	int row = getSize();
	int column = getSize();
	
	for (int m = -column/2 ; m <= 0 ; m++) 
		{
			for (int n = -row/2 ; n<= row/2 ; n++) 
			{
				if ( abs (m) + abs (n) <= row/2){
				out_stream << "*";
				cout << "*";
				}
				
				else{
				out_stream << " " ;
				cout << " "; 
				}
			}
		out_stream << endl;
		cout << endl;
		}
	out_stream << endl << endl;
	cout << endl << endl;
}

void Pyramid::printHollowShape (ofstream &out_stream)
{
	int row = getSize();
	int column = getSize();

	for (int m = -column/2 ; m <= 0 ; m++) 
		{
			for (int n = -row/2 ; n<= row/2 ; n++) 
			{
				if ( abs (m) + abs (n) == (row)/2){
				out_stream << "*"; 
				cout << "*";				
				}
				
				else if ( abs (m) == 0){
				out_stream << "*";
				cout << "*"; 
				}
				
				else{
				out_stream << " ";
				cout << " "; 
				}
			}
		out_stream << endl;
		cout << endl;
		}
	out_stream << endl << endl;
	cout << endl << endl;
}

// Inherited Function declerations for class Triangle
Triangle::Triangle()
{
	shape_type = TRIANGLE; 
}

void Triangle::defineSize ()
{	
	int size_temp=0;
	
	do{
	cout << "Enter the size of the desired triangle as an even integer between 2 and 20." << endl;
	cin >> size_temp;
	}
	while (size_temp % 2 == 1 || size_temp < 2 || size_temp > 20);
	
	setSize(size_temp);
}

void Triangle::printFilledShape(ofstream &out_stream)
{
	int row = getSize();
	int column = getSize();
	
	for (int m = -row; m <= 0 ; m++) 
		{
			for (int n = -column ; n<= 0 ; n++) 
			{
				if ( abs (m) + abs (n) <= row){
				out_stream << "*";
				cout << "*";
				}
				
				else{
				out_stream << " ";
				cout << " "; 
				}
			}
		out_stream << endl;
		cout << endl;
		}
		
		out_stream << endl << endl;
		cout << endl << endl;
}

void Triangle::printHollowShape (ofstream &out_stream)
{
	int row = getSize()-1;
	int column = getSize()-1;

	for (int m = -row; m <= 0 ; m++) 
		{
			for (int n = -column ; n<= 0 ; n++) 
			{
				if ( abs (m) + abs (n) == row){
				out_stream << "*";
				cout << "*";
				}
								
				else if (abs (m) == 0 || abs (n) == 0){
				out_stream << "*";
				cout << "*";
				}
							
				else {
				cout << " "; 
				out_stream << " ";
				}
			}
		out_stream << endl; 
		cout << endl;
		}
	out_stream << endl << endl;		
	cout << endl << endl;
}
