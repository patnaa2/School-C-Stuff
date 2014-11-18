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
#include <cstdlib>
using namespace std; 

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	// Setting precision to 12 decimal places 
	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(12);
	
	// decleration of variables 
	int stop = 0; 
	int input = 0; 	
	int m = 0; 
	double next_term = 0.0;
	double pi = 0.0; 
	double prev_pi = 0.0;
	double stopping_condition_pi = 0.0;
	double stopping_condition_prev_pi = 0.0;
	
	// asking for user input
	cout << "Please enter an integer value." << endl;
	cin >> input ; 
	
	// setting condition for the loop
	while (stop<2){
	
	//defining the loop necessary for pi
		next_term = pow (-1, m) * (4.0/((2*m)+1));
		pi = next_term + pi;
		prev_pi = pi - next_term ; 
	 
	// displaying each result of pi
		cout << m+1 << ":	" << pi << endl; 
		
	// defining the operations needed for the stopping condition 
		stopping_condition_pi = floor ((pi)*pow(10.0 , input));
		stopping_condition_prev_pi = floor ((prev_pi)* pow(10.0, input));
		
	// Stoping condition loop
		if (stopping_condition_pi == stopping_condition_prev_pi){
		
		stop ++ ;
		}
	
	// Reiterating the entire loop	
	m++; 		
}
	return 0;
}
