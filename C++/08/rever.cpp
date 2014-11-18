#include <iostream>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int number [5] = {1,2,3,4,5};
	int number_output [5] = {0,0,0,0,0};
	
	for (int i = 0; i< 5; i++) 
	{
		number_output [5-i] = number[i];
		
	}
	
	for (int x = 4; x<0; x--)
	{
		number [x] = number_output [x];
	}
	
	cout << number [4]; 
	
	return 0;
}
