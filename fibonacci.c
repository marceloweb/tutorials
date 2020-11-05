// Include file <"stdio.h"> 
// stdio.h  is responsible for inputs and outputs. #include "stdio.h" 
#include "stdio.h"

void main() { 
int a, b, aux, i, n; 

// Assign initial values to the variables
a = 0; 
b = 1; 

// The function printf() shows on the screen 
printf("Enter a number: "); 

// Gets the value entered
scanf("%d", &n); 
printf("Fibonacci:\n"); 
printf("%d\n", b); 

// This block generates a sequence of numbers
for(i = 0; i < n; i++) { 
	aux = a + b; 
	a = b; 
	b = aux; 

	printf("%d\n", aux); 
} 
}