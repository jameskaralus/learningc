//gcc revnum.c -o revnum 


#include <stdio.h>
//Functional Prototype 

int reverse_number(int);

//Reverse the number here 
int reverse_number ( int number )
{

	//Intialize rev to 0 
	int reverse = 0 ;
	//loop while number is non-zero
	while ( number )
	{

		// Multiply 10 to reverse to take it to the next place 
		// add one's digit to reverse 
		// This happens during every iteration 
		reverse = (reverse * 10) + ( number % 10 ) ;
		//Discard one's digit 
		number = number / 10 ;
	}	
	//Return reverse 
	return reverse ;
}
int main ()
{
	int number;
	//Read an integer
	printf("\n\nEnter a number: ");
	scanf("%d", &number);
	//Call reverse_number through printf itself 
	printf("\n\nReverse: %d\n\n", reverse_number(number));
	return 0;
}
