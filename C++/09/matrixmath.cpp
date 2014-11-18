#include "matrixmath.h"
#include <iostream>
#include <fstream>
#include <cstdlib>
using namespace std;

void input_matrix (int m_a [][M_SIZE], int m_b [][M_SIZE], int &r1, int &r2, int &c1, int &c2)
{
	ifstream matrix_1;
	
	//Connecting the input file 
	matrix_1.open ("matrix_1.txt");
	
	//Failure setting
	if(matrix_1.fail( ) ) 
	{
	  cout << "Input file opening failed.\n"; 
	  exit(1); 
	}

	// determining order of matrix 1
	matrix_1 >> r1 >> c1; 

	// storing the values in the matrix 1
	for(int i=0; i<r1; i++)
	{	for(int j=0; j<c1; j++) 
		{
		 matrix_1 >> m_a [i][j];
		}	
	}
	
	// determining order of matrix 2	
	matrix_1 >> r2 >> c2; 
	 
	// storing the values in the matrix 2
	for(int x=0; x<r2; x++)
	{	for(int y=0; y<c2; y++) 
		{
		 matrix_1 >> m_b [x][y];
		}	
	}

	//disconnecting the input matrix
	matrix_1.close ();
	
}

void echo_matrix (int m_a [][M_SIZE], int m_b [][M_SIZE], int &r1, int &r2, int &c1, int &c2)
{	
	// Displaying order of the first matrix
	cout << "The order of the first matrix is " << r1 << " by " << c1 << endl;
	
	// Displaying the matrix values stored in the first matrix
	for(int i=0; i<r1; i++)
	{	for(int j=0; j<c1; j++) 
		{
		 cout << m_a [i][j] << " ";
		}	
	  cout << endl;
	}
	
	//Displaying the order of the second matrix
	cout << "The order of the second matrix is " << r2 << " by " << c2 << endl;
	
	// Displaying the matrix values stored in the second matrix
	for(int x=0; x<r2; x++)
	{	for(int y=0; y<c2; y++) 
		{
		  cout << m_b [x][y] << " ";
		}	
	  cout << endl;
	}
			
}

void multiply_matrix (int m_a [][M_SIZE], int m_b [][M_SIZE], int m_ans [][M_SIZE], int &r1, int &r2, int &c1, int &c2)
{
	//Condition to ensure two matrices that cannot be multipied output an error
	if (c1 != r2)
	{
		cout << endl << "Matrix multiple is not possible." 
			 << " Ending program." << endl; 
		exit (0);
	}
	
	//Matrix multiplication operation
	for(int a=0; a < r1; a++) // Account for rows
	{	for(int b=0; b < c2; b++) //Account for columns
		{
		for (int c=0; c < c1; c++) // Account for third counter to allow for multplication of each element
		{
		  m_ans [a][b] += (m_a[a][c]*m_b[c][b]);  
		}	
		}
	  cout << endl;
	}
	
}

void output_matrix (int m_ans [][M_SIZE], int &r1, int&c2)
{
	ofstream out_stream;
		
	out_stream.open("matrix product.txt"); 
	
	//Displaying the output matrix in console application 
	for(int i=0; i<r1; i++)
	{	for(int j=0; j<c2; j++) 
		{
		 cout << m_ans [i][j] << " ";
		}	
		cout << endl;
	}

	// output order of product matrix in text document
	out_stream << "The order of the product matrix is " << r1 << " by " <<c2 << endl;
	
	// displaying the output in text document
	for(int i=0; i<r1; i++)
	{	for(int j=0; j<c2; j++) 
		{
		 out_stream << m_ans [i][j] << " ";
		}	
		out_stream << endl;
	}
	
	//Disconnecting the output stream
	out_stream.close ();
}



