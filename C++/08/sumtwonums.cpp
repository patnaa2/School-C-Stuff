#include <iostream>
#include <cstdlib> 
#include <cctype> 
#include "sumtwonums.h"
using namespace std; 

void get_input (char number_char[], int number_int[], int &int_counter) 
{
// local variable declerations
int digit_counter = 0;
char number_char_skel [ARRAY_SIZE]; 
int number_int_skel [ARRAY_SIZE];

// inital user prompt
	cout << "Enter numbers for adding ('q' to quit anytime)" << endl;
	cout << "Enter positive integer with up to digits: "; 

	const int ARRAY_SIZE = 20;
	char next_value; 
	cin.get (next_value); 
	int index = 0; 
	
	for (int i=0; i<20; i++)
	{
	number_char [i] = 0;
	}	
	
	for (int i=0; i<20; i++)
	{
	number_int [i] = 0;
	}
	
	while (next_value != '\n')
		{
			while (next_value == 0)
			{
				cin.get (next_value);
			}
			
			if (next_value == 'q')
			{
				cout << endl << "Quiting..."; 
				exit (0);
			}
			
			if ((isdigit(next_value)) && (index < ARRAY_SIZE - 1))
			{
					number_char [index] = next_value; 
					index++;
			}
				
			cin.get(next_value);
			int_counter++;
		}

	for (int i=0; i<int_counter; i++)
	{
	number_int [i] = convert_char_int (number_char [i]);
	}

}

// Output without the leading zeroes
void echo (int number_int[], int &int_counter)
{
	int i = 0; 
	while (number_int[i] == 0)
	{
		i++;
	}
		
	for (i; i<int_counter; i++)
	{
	cout << number_int [i]; 
	}
}

//Changing any character value to integers
int convert_char_int (char x) 
{ 
	int output = 0; 
	output = x - '0'; 
	return output; 
}	

//Final sum of two numbers
void sum_of_two_numbers	(int number_int_1[], int number_int_2[], int &int_counter_1, int &int_counter_2, int number_int_ans[], int &int_counter_3)
{
	int left_over = 0;

//Output if the first counter is larger then or equal to the second counter
	if (int_counter_1 >= int_counter_2)
	{
		for (int i = 0; i < int_counter_1; i++)
		{
//Allow for carry over values (pen and pencil method)
			if ((number_int_1[i] + number_int_2[i]) >= 10)
			{
			cout << endl << number_int_1[i]; 
			cout << endl << number_int_2[i];
			number_int_ans[i] = number_int_1[i] + number_int_2[i] - 10;
			cout << endl << number_int_ans[i] << endl;
			left_over = 1;
			}
			
//Normal addition if there is no carryover
			else 
			{
			number_int_ans[i] = number_int_1[i] + number_int_2[i] + left_over; 
			left_over = 0;
			}
//Running counter to display the sum result via the echo function
		int_counter_3++;
		}
	}

//Sum if counter1 is less than counter 2
	else 
	{
		for (int i = 0; i < int_counter_2; i++)
		{
			number_int_ans[i] = number_int_1[i] + number_int_2[i] + left_over; 
		
			if (number_int_1[i] + number_int_2[i] >= 10)
			cout << endl << number_int_1[i]; 
			cout << endl << number_int_2[i];
			number_int_ans[i] = number_int_1[i] + number_int_2[i] - 10;
			cout << endl << number_int_ans[i] << endl;
			left_over = 1;
			
			else 
			number_int_ans[i] = number_int_1[i] + number_int_2[i] + left_over; 
			left_over = 0;
		
		int_counter_3++;
		}
	}
	
	
}

//Reverse the order of the index values in a given integer array
void reverse_order (int number_int_1[], int &int_counter_1)
{
//Local variable for an integer array needed in this sub function
	int local_array_int [int_counter_1];
	
	for (int i = 0; i < int_counter_1; i++) 
	{
		local_array_int [int_counter_1-i] = number_int_1[i];
		
	}
	
	for (int x = int_counter_1-1; x<0; x--)
	{
		number_int_1 [x] = local_array_int [x];
	}
	
	
}

