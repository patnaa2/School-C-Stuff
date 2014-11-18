//*********************************************
// Student Name: Anshuman Patnaik                                    
// Student Number: 20514402                                           
//
// SYDE 121 Lab: 04 Assignment: Random Number Generation
//
// Filename: LAB0404.cpp 
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
#include <stdlib.h>
using namespace std; 

int main( ) {
	// Declaration of all relevant variables that are not generated at random
	int answer = 0;
	int count = 0;  
	
	// Reminder to the user that -1 is the exit sequence 
	cout << "\nPress -1 at any time to exit the program.\n" ; 
	
	// Beginning of the loop defined by the boolean expression when the input isn't -1 
	
	while(answer != -1 ){
		
		// Declaration of the random variables
		int number_1 = rand( ) % 10;
		int number_2 = rand ( ) % 10; 
		
		// Display the initial question		
		cout << "\nWhat is " << number_1 <<" times " << number_2 << " ?"
			 << endl;
		cin >> answer;
		
		// Declaration of the sequence of events if the correct answer is entered
			if (answer == number_1 * number_2){
				cout << "\nCongratulations. The next question is:\n";
				count++; 
			}
				
		// Exit Sequence when input is -1
			if (answer == -1){
				break;
			}
		
		// Calculations if the answer was wrong 	
			else{
				
				while (answer != number_1*number_2){
					  cout << "\nIncorrect. Please Try again.\n";
					  cout << "\nWhat is " << number_1 <<" times " << number_2 << " ?"
					       << endl;
					  cin >> answer;	
				
			// Calculations if the changed answer is right 
					if (answer == number_1*number_2){
					cout << "\nCongratulations. The next question is:\n";
					}
		
			//Exit Sequence in the answer was wrong 
					if (answer == -1){
						break;
					}
	
				}		
			}	
	}
	
	cout << "\nYou got " << count << " questions correct.";
	
	return 0;
}
