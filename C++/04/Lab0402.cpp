//*********************************************
// Student Name: Anshuman Patnaik                                    
// Student Number: 20514402                                           
//
// SYDE 121 Lab: 04 Assignment: A simple loop
//
// Filename: LAB0402.cpp 
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
	
	// Defining variables 	
	int number_input = 0;
	unsigned int factorial = 1; 
	
	//Asking for user input	
	cout << "\nEnter the positive integer for which you would like the factorial.\n";
	cin >> number_input; 
	
	//Calculation if integer input is greater than 2
		for (int i=2; i <= number_input; ++i){
	    factorial = factorial * i;
	}
	
	// Calculation if integer input is 0 or 1
	while ((number_input == 1) || (number_input == 0)){
		break; 
	}
	
	//Calculation if integer input is negative
	while (number_input<0){
		cout << "Invalid Input. Choose again."
			 << endl;
		cin >> number_input;
	
	// The above calcuations have to be redifined as the while loop is repeated everytime a wrong input is entered
	
	//Calculation if integer input is greater than 2
		for (int i=2; i <= number_input; ++i){
	    factorial = factorial * i;
	}
	
	// Calculation if integer input is 0 or 1
	while ((number_input == 1) || (number_input == 0)){
		break; 
	}
		    				
	}
			
	//Final output of result
	cout << number_input << "! = " << factorial;
	
		
	return 0;
}
