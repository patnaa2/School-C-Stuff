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
using namespace std; 

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main( ) {
	 
	// Defining the variables 
	int menu_choice = 0;
	
	int managers = 0; 
	double man_weekly_salary = 0.0;
	double total_man_salary = 0.0; 
	
	int hourly_workers = 0; 
	double hourly_wage = 0.0;
	int hours_worked = 0; 
	double hours_weekly_salary = 0.0; 
	double total_hours_salary = 0.0; 
	
	int com_workers = 0; 
	double gross_weekly_sales = 0.0; 
	double com_weekly_salary = 0.0; 
	double total_com_salary = 0.0; 
	
	int piece_workers = 0; 
	int number_pieces = 0; 
	double income_per_piece = 0.0; 
	double piece_weekly_salary = 0.0; 
	double total_piece_salary = 0.0;
	
	int total_workers = 0; 
	double total_salary = 0.0;
	
	
	do {
	
	// Displaying option select for user  
	
	cout << "Select the type of employee:\n"
		 <<	"1. Managers\n"
		 <<	"2. Hourly workers\n"
		 <<	"3. Commission workers\n" 
		 <<	"4. Pieceworkers\n"
		 << "or select -1 to view total salary\n.";
		 
	cin >> menu_choice; 
	
		switch (menu_choice)
		{
		case 1:
			cout << "Enter weekly salary\n";
			cin >> man_weekly_salary; 
		
		managers++;
		total_man_salary = man_weekly_salary + total_man_salary; 
		
		break; 
		
		case 2:
			cout << "\nEnter number of hours worked\n"; 
			cin >> hours_worked; 
			
			cout << "\nEnter hourly wage.\n";
			cin >> hourly_wage; 
			
			if (hours_worked <= 40) {
			hours_weekly_salary = 40 * hourly_wage; 
			}
			
			else {
			hours_weekly_salary = 40*hourly_wage + 1.5*hourly_wage*(hours_worked - 40) ;
			}				
		
		hourly_workers++; 
		total_hours_salary = hours_weekly_salary + total_hours_salary; 
		
		break; 
		
		case 3: 
			cout << "\nEnter grossly weekly sales.\n";
			cin >> gross_weekly_sales ; 
			
			com_weekly_salary = 200 + (0.66*gross_weekly_sales) ; 
			
		com_workers++; 
		total_com_salary = com_weekly_salary + total_com_salary; 
		
		break; 
		
		case 4: 
			cout << "\nEnter total number of peices created.\n";
			cin >> number_pieces;
				
			cout << "\nEnter income per peice created.\n";
			cin >> income_per_piece; 
		
		piece_weekly_salary = income_per_piece * number_pieces; 
		
		piece_workers++; 
		total_piece_salary = piece_weekly_salary + total_piece_salary; 
		
		break; 
		
		case -1: 
		
			total_workers = managers + hourly_workers + com_workers + piece_workers; 
			total_salary = total_man_salary + total_hours_salary + total_com_salary + total_piece_salary; 
			
			cout << "\nType of Employee	|	Number of Emloyees	|	Total Salary | \n" 
				 << "\nManagers		|	" << managers << "			|	" << total_man_salary  
				 << "\nHourly Worker		|	" << hourly_workers << "			|	" << total_hours_salary  
				 << "\nCommission Worker	|	" << com_workers << "			|	" << total_com_salary  
				 << "\nPieceworker		|	" << piece_workers << "			|	" << total_piece_salary << endl
				 << "\nTotal			|	" << total_workers << "			|	" << total_salary; 
				
			break;
		
		default: 
			cout << "\nInvalid Selection. Try again.\n";
	
			break; 
		
		
		
		}
	
	}
	
	while (menu_choice != -1);
	
	return 0;
}
