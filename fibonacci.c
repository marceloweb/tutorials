// Include file <"stdio.h"> 
// stdio.h  is responsible for inputs and outputs. #include "stdio.h" 
#include "stdio.h"

void main() { 
    unsigned long long int a, b, aux;
	unsigned int i, n;

    // Assign initial values to the variables
    a = 0; 
    b = 1; 

    // The function printf() shows on the screen 
    printf("Enter a number: "); 

    // Gets the value entered
    scanf("%u", &n); 
    printf("Fibonacci:\n"); 
    printf("1: 1\n"); 

    // This block generates a sequence of numbers
    for(i = 0; i < n-1; i++) { 
	    aux = a + b; 
	    a = b; 
	    b = aux; 

	    printf("%u: %llu\n", i+2, aux); 
    } 
}
