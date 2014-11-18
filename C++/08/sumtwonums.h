//*********************************************
// Student Name: Anshuman Patnaik                                    
// Student Number: 20514402                                           
//
// SYDE 121 Lab: 07 Assignment : Number 1
//
// Filename: Lab0701.cpp 
// Date submitted: 11/06/2013
//
// I hereby declare that this code, submitted
// for credit for the course SYDE121, is a product
// of my own efforts. This coded solution has
// not been plagiarized from other sources and
// as not been knowingly plagiarized by others.
//
//I consulted the textbook in 8.1 
//*********************************************

#ifndef SUMTWONUMS_H
#define SUMTWONUMS_H

// constant size variable decleration 
const int ARRAY_SIZE = 20;

//function decleration 
void get_input (char number_char[], int number_int[], int &int_counter); 
void convert_array_type (char number_char [], int number_int [], int &int_counter); 
void echo (int number_int[], int &int_counter);
int convert_char_int (char x);
void sum_of_two_numbers	(int number_int_1[], int number_int_2[], int &int_counter_1, int &int_counter_2, int number_int_ans[], int &int_counter_3);
void reverse_order (int number_int_1[], int &int_counter_1);

#endif

