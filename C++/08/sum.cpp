#include <iostream>
#include "sumtwonums.h"

int main () 
{
	using namespace std; 
	
	char input1_char [ARRAY_SIZE], input2_char [ARRAY_SIZE]; 
	int input1_int [ARRAY_SIZE], input2_int [ARRAY_SIZE], sum_of_both [ARRAY_SIZE];
	int counter1 = 0, counter2 = 0, counter3 = 0;

	get_input (input1_char, input1_int, counter1);
	get_input (input2_char, input2_int, counter2);
	cout << endl << "The first number is: ";
	echo (input1_int, counter1); 
	cout << endl << "The second number is: "; 
	echo(input2_int, counter2);
	reverse_order (input1_int, counter1);
	reverse_order (input2_int, counter2); 
	sum_of_two_numbers	(input1_int, input2_int, counter1, counter2, sum_of_both, counter3);
	cout << endl << "The sum of the arrays is: ";
	echo (sum_of_both, counter3);
	
}
