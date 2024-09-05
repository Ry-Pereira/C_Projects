#include <stdio.h>

int main()
{
    // Welcome statement to the user from the screen
    printf("Welcome to the Basic Calculator Program\n");
    

    // Decllaring the variables for the first and second number and the operating symbol
    float num1;
    float num2;
    char operator_symbol;

    // Initializing the first number with user input
    printf("The first number: ");
    scanf("%f",&num1);
    
    // Initializing the second number with user input
    printf("The second number: ");
    scanf("%f",&num2);
    
    // Initializing the operator symbol
    printf("List of Operators:\n+ Add\n- Subtrac\n* Multiply\n/ divide\n Operator: ");
    scanf("%s",&operator_symbol);


    // Swicth statement to see if the operator matches any of the operator cases below, if so , it will do and print the result. If not a default staemtn will print to screen tot eh user
    switch(operator_symbol){
        case '+':
            printf("\n%f + %f =  %f",num1,num2, (num1 + num2));
            break;
        case '-':
            printf("\n%f - %f =  %f",num1,num2, (num1 - num2));
            break;
        case '*':
            printf("\n%f * %f =  %f",num1,num2, (num1 * num2));
            break;
        case '/':
            printf("\n%f / %f =  %f",num1,num2, (num1 / num2));
            break;
        default:
            printf("\nSorry Please type in real numbers");
            break;
    }
    
    // Goodbye Statement to the user of the program ending
    printf("\nSystem shutting down... Goodbye!");

    // Will return 0 if the program runs smoothly
    return 0;
}