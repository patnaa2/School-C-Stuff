//*********************************************
// Student Name: Anshuman Patnaik                                    
// Student Number: 20514402                                           
//
// SYDE 121 Lab: 09 Assignment: 02
//
// Filename: matrices.dev 
// Date submitted: 11/21/2013
//
// I hereby declare that this code, submitted
// for credit for the course SYDE121, is a product
// of my own efforts. This coded solution has
// not been plagiarized from other sources and
// as not been knowingly plagiarized by others.
//
//*********************************************
#ifndef MATRIXMATH_H
#define MATRIXMATH_H
		
const int M_SIZE = 100; 
	
void input_matrix (int m_a [][M_SIZE], int m_b [][M_SIZE], int &r1, int &r2, int &c1, int &c2); 
void echo_matrix (int m_a [][M_SIZE], int m_b [][M_SIZE], int &r1, int &r2, int &c1, int &c2);
void multiply_matrix (int m_a [][M_SIZE], int m_b [][M_SIZE], int m_ans [][M_SIZE], int &r1, int &r2, int &c1, int &c2);
void output_matrix (int m_ans [][M_SIZE], int &r1, int&c2);
	
#endif 
