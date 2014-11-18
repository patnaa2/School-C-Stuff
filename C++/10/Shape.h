//*********************************************
// Student Name: Anshuman Patnaik                                    
// Student Number: 20514402                                           
//
// SYDE 121 Lab: 10 Assignment
//
// Filename: Shape.dev 
// Date submitted: 12/01/2013
//
// I hereby declare that this code, submitted
// for credit for the course SYDE121, is a product
// of my own efforts. This coded solution has
// not been plagiarized from other sources and
// as not been knowingly plagiarized by others.
//
//*********************************************
#include <fstream>
#include <iostream>
#include <cstdlib>
using namespace std; 

//Header Wraaping
#ifndef SHAPE_H;
#define SHAPE_H; 

enum Shape_Type {SQUARE, DIAMOND, PYRAMID, TRIANGLE};

class Shape
{
	public:
	Shape ();
	Shape (Shape_Type newshape_type);
	void defineSize ();
	void defineFill ();
	int getSize ();
	void setSize (int newshape_size); 
	void printFilledShape (ofstream &out_stream);
	void printHollowShape (ofstream &out_stream);
	bool getIsFilled ();
	
	protected:
	Shape_Type shape_type; 
	
	private:
	int shape_size;
	bool isFilled;
};

//Inherited class square from parent class shape
class Square : public Shape 
{
	public:
		Square ();
		void defineSize ();
		void printFilledShape (ofstream &out_stream);
		void printHollowShape (ofstream &out_stream);
};

//Inherited class diamond from parent class shape
class Diamond : public Shape
{
	public:
		Diamond ();
		void defineSize ();
		void printFilledShape (ofstream &out_stream);
		void printHollowShape (ofstream &out_stream);
};

//Inherited class pyramid from parent class shape
class Pyramid : public Shape
{
	public:
		Pyramid ();
		void defineSize ();
		void printFilledShape (ofstream &out_stream);
		void printHollowShape (ofstream &out_stream);
};

//Inherited class triangle from parent class shape
class Triangle : public Shape
{
	public:
		Triangle ();
		void defineSize ();
		void printFilledShape (ofstream &out_stream);
		void printHollowShape (ofstream &out_stream);
};

#endif 
