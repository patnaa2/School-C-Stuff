#include "matrixmath.h"
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>
using namespace std; 

int main () 
{
	int matrix_a [M_SIZE][M_SIZE];
	int matrix_b [M_SIZE][M_SIZE];
	int matrix_ans [M_SIZE][M_SIZE];
	int row_1 = 0; 
	int row_2 = 0; 
	int col_1 = 0;
	int col_2 = 0;
	//string matrix_string = "";
	
	input_matrix (matrix_a, matrix_b, row_1, row_2, col_1, col_2);
	echo_matrix (matrix_a, matrix_b, row_1, row_2, col_1, col_2);
	multiply_matrix (matrix_a, matrix_b, matrix_ans, row_1, row_2, col_1, col_2);
	output_matrix (matrix_ans, row_1, col_2);
	
}
