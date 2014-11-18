//*********************************************
// Student Name: Anshuman Patnaik                                    
// Student Number: 20514402                                           
//
// SYDE 121 Lab: 06 Assignment : Number 2
//
// Filename: Lab0602.cpp 
// Date submitted: 10/28/2013
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

// Function needed to input data
void get_data (int &count_F, int &count_E, int &count_D, int &count_C, int &count_B, int &count_A, double &average);
// Function needed to output data
void printdata (int &count_F, int &count_E, int &count_D, int &count_C, int &count_B, int &count_A, double &average);

int main(int argc, char** argv) {
	// The variables have been declared in both functions to ensure that 
	// the counters are carried over from the input function 
	// to the output function. 
	// count_F has been initalized to -1 to account for the 
	// extra count when the user enter -1 to end the program
	int count_F = -1, count_E = 0, count_D = 0, count_C = 0, count_B = 0, count_A = 0; 
	double average = 0.0;
	
	get_data (count_F, count_E, count_D, count_C, count_B, count_A, average); 
	printdata (count_F, count_E, count_D, count_C, count_B, count_A, average);
	
	return 0;
}

void get_data (int &count_F, int &count_E, int &count_D, int &count_C, int &count_B, int &count_A, double &average) {
	//Varaibles needed for average and user input
	//Note that the number of students has to be intialized to -1
	// and the cummulative percentage has been initialized to 1
	// to account for the -1 entered by the user to 
	// compile the results of the program
	int percentage = 0, num_of_students = -1, cum_percentage = 1; 
	
	// Enumeration needed for clarity in the switch statement
	enum {Perfect = 100, A = 90, B = 80, C = 70, D = 60, E = 50};

	
	do {
	cout << "Enter the percentage earned by the student."
		 << "\nOr enter -1 to compile results." << endl;
	cin >> percentage;
	
	//Calculations for average
	num_of_students++;
	cum_percentage += percentage;
	
	// Defining the 'grade' argument for the switch loop
	int grade = 10*(percentage/10);	
	
	// Switch statment for histogram
	switch (grade){
	
	case Perfect: 
	  case A:
	  	count_A ++; 
	  	break;
	  	
	  case B:
		count_B ++; 
		break;
				
	  case C:
		count_C ++;
		break;
		
	  case D: 
		count_D ++; 
		break;
	
	  case E:
		count_E ++; 
		break; 
	
	 default: 
		count_F ++; 
		break;
	}
  }
	while (percentage >= 0);
	
	// Average Calculation
	average = (cum_percentage) / static_cast<double>(num_of_students); 
	
}

void printdata (int &count_F, int &count_E, int &count_D, int &count_C, int &count_B, int &count_A, double &average) {

	// Output of the average
	cout << "The average of the class is " << average << endl 
		 << "The histogram for the class is: " << endl; 

	// Each of the asterisks coincide to the counter used in the previous function
	// The following is the output for the histogram
	cout << "0-49:";	 
	for (int f = count_F; f>0 ; f--){
	 	cout << "\t*"; 
 	}

	cout << endl << "50-59:";		 
	for (int e = count_E ; e>0 ; e--){
	 	cout << "\t*"; 
 	}
	
	cout << endl << "60-69:";		 
	for (int d = count_D; d>0 ; d--){
	 	cout << "\t*"; 
 	}
	
	cout << endl << "70-79:";		 
	for (int c = count_C; c>0 ; c--){
	 	cout << "\t*"; 
 	}
 	
 	cout << endl << "80-89:";		 
	for (int b = count_B; b>0 ; b--){
	 	cout << "\t*"; 
 	}
 	
 	cout << endl << "90-100:";		 
	for (int a = count_A; a>0 ; a--){
	 	cout << "\t*"; 
 	}
	
}





