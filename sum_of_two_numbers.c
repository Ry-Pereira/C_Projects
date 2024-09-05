#include <stdio.h>

int main()
{
    // Welcome message for the user.
    printf("Welcome to the Sum of two numbers Program\n"); 
    
    //Declaring the variables for the first and second number.
    int num1;
    int num2;
    

    // Initalzing the input numbers for the declared variables.
    printf("Whats the first number: ");
    scanf("%d",&num1);
    printf("\nWhats the second number: ");
    scanf("%d",&num2);
    

    // Printing to screen the variables and the sum of both number variables.
    printf("\n\nThe first number: %d",num1);
    printf("\nThe second number: %d",num2);
    printf("\nThe Sum of both numbers are: %d", num1 + num2);
    
    
    // This will return 0 if every line of code runs smoothly
    return 0;
}