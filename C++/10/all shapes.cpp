#include <iostream>
#include <cmath>
using namespace std; 

	int main(int argc, char** argv) {
	
	/* Square Hollow
	int shape_size = 10; 
	int row = shape_size-1, column = shape_size-1;
		
		for (int m = 0 ; m <= row ; m++) 
		{
			for (int n = 0 ; n <= column; n++) 
			{
				if ((abs(n-column)==0) || ((abs(n-column))==row))
				cout << "*";
				
				else if (((abs(m-column)==0) || ((abs(m-column))==column)))	
				cout << "*"; 
				
				else 
				cout << " ";	 		
						
			}
		
		cout << endl;
		} */
	
	/* Diamond Filled	
	int shape_size = 5; 
	int row = shape_size, column = shape_size;
		
		for (int m = -column/2 ; m <= column/2 ; m++) 
		{
			for (int n = -row/2 ; n<= row/2 ; n++) 
			{
				if ( abs (m) + abs (n) <= row/2)
				cout << "*";
				 		
				else 
				cout << " "; 
			}
		
		cout << endl;
		}
	*/
	
	/* Diamond Hollow
	int shape_size = 5; 
	int row = shape_size, column = shape_size;

		for (int m = -column/2 ; m <= column/2 ; m++) 
		{
			for (int n = -row/2 ; n<= row/2 ; n++) 
			{
				if ( abs (m) + abs (n) == row/2)
				cout << "*";
				
				else 
				cout << " "; 
			}
		
		cout << endl;
		}
	*/
	
	/* Filled pyramid
	int shape_size = 5; 
	int row = shape_size, column = shape_size;
	
		for (int m = -column/2 ; m <= 0 ; m++) 
		{
			for (int n = -row/2 ; n<= row/2 ; n++) 
			{
				if ( abs (m) + abs (n) <= row/2)
				cout << "*";
				 		
				else 
				cout << " "; 
			}
		
		cout << endl;
		}
	*/
	
		
	int shape_size = 9; 
	int row = shape_size, column = shape_size;

		for (int m = -column/2 ; m <= 0 ; m++) 
		{
			for (int n = -row/2 ; n<= row/2 ; n++) 
			{
				if ( abs (m) + abs (n) == (row)/2)
				cout << "*";				
				
				else if ( abs (m) == 0)
				cout << "*"; 
				
				else 
				cout << " "; 
			}
		
		cout << endl;
		}
		
	
	
	 /*
	int shape_size = 8; 
	int row = shape_size-1, column = shape_size-1;
		
		for (int m = -row; m <= 0 ; m++) 
		{
			for (int n = -column ; n<= 0 ; n++) 
			{
				if ( abs (m) + abs (n) <= row)
				cout << "*";
				 		
				else 
				cout << " "; 
			}
		
		cout << endl;
		}
	
	
	*
	int shape_size = 8; 
	int row = shape_size-1, column = shape_size-1;
		
		for (int m = -row; m <= 0 ; m++) 
		{
			for (int n = -column ; n<= 0 ; n++) 
			{
				if ( abs (m) + abs (n) == row)
				cout << "*";
				
				else if (abs (m) == 0)
				cout << "*";
				
				else if (abs (n) == 0)
				cout << "*";
				 		
				else 
				cout << " "; 
			}
		
		cout << endl;
		}
	
*/
		return 0;
	}
