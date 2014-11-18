#include <iostream>
#include <cstdlib>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	const int ARRAY_SIZE = 21;
	char number [ARRAY_SIZE];
	char next_value; 
	cin.get (next_value); 
	int index = 0; 
	int int_counter = 0; 	
	
	while (next_value != '\n')
		{
			while (next_value == 0)
			{
				cin.get (next_value);
			}
			if (next_value == '\q')
			{
				cout << endl << "Quiting..."; 
				exit (0);
			}
			
			if ((isdigit(next_value)) && (index < ARRAY_SIZE - 1))
					{
					number [index] = next_value; 
					index++;
					}
				
			cin.get(next_value);
					
				
		}
		
	return 0;
}
