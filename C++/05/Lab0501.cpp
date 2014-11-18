//*********************************************
// Student Name: Anshuman Patnaik                                    
// Student Number: 20514402                                           
//
// SYDE 121 Lab: 05 Assignment : Number 1
//
// Filename: lab0501.cpp 
// Date submitted: 10/16/2013
//
// I hereby declare that this code, submitted
// for credit for the course SYDE121, is a product
// of my own efforts. This coded solution has
// not been plagiarized from other sources and
// as not been knowingly plagiarized by others.
//
//*********************************************

#include <iostream>
#include <cmath>
using namespace std; 

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main( ) {
	
	//Declare the variables 
	
	int row_num = 0.0;
	int col_num = 0.0; 
	
	//Ask for the input 
	
	cout << "\nEnter an odd integer between 3 and 19.\n";
	cin >> row_num; 
	
	//Error check to ensure input fits the defined criteria
	
	while (row_num < 3 || row_num > 19 || row_num%2 == 0 ){
		cout << "Incorrect value entered. Please try again.\n";
	}
	
	// Defining a matrix with columns m and rows n. 
	 
	for (int m = -row_num/2 ; m <= row_num/2 ; m++) {
		
		for (int n = -row_num/2 ; n<= row_num/2 ; n++) {
		
			if ( abs (m) + abs (n) <= row_num/2){
				cout << "*";
			}
			 		
			else {
				cout << " "; 
			}
			
	}
	cout << endl;
	}
	

	
	return 0;
}
