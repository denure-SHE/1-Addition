// First assignment for basic additio 
// Pull this addition code
// Add specific instructions to improve the code in your respository


  
// Header file for input output functions 
#include <stdio.h> 
#include <stdlib.h> /* atoi */ 
  
  
// Function to compute the sum of two numbers 
int add(int a, int b) 
{ 
    return (a + b) ; 
} 

// Compile this program : g++ addition.cpp -o main 
// When we run a program we can give arguments to that program like:
// ./main 100 200 


int main(int argc, char* argv[]) 
{ 
  
    int num1, num2; 
  //argc stands for argument count  
  //argv stands for argument values
  // These are variables passed to main function when it starts executing
    // Check if the length of args array is 1 
    if (argc == 1) 
        printf("No command line arguments found.\n"); 
  
    else { 
  
        // Get the command line argument and 
        // Convert it from string type to integer type 
        // using function "atoi( argument)" 
        num1 = atoi(argv[1]); 
        num2 = atoi(argv[2]); 
  
        // Find the average and print it 
        printf("%d\n", add(num1, num2)); 
    } 
    return 0; 
} 
