#include <stdio.h>
#include <math.h>



int main()
{
    // Welcome statement to the user.
    printf("Welcome to the \'Hypotenuse\' Program\n"); 
    
    // Declariing variables for length a and b.
    float length_a;
    float length_b;
    

    // Inialtizing lenght for side a with user input.
    printf("What the length of the side a: ");
    scanf("%f",&length_a);
    
    // Inialtizing lenght for side b with user input.
    printf("What the length of the side b: ");
    scanf("%f",&length_b);

    // Printing Hypotenuse to screen for the user.
    printf("The Hypoenuse is: %f", sqrt(pow(length_a,2) + pow(length_b,2)));


    // Goodbye statement to the screen for the user.
    printf("Program Closing... Goodbye! ");
    
    // Returns 0 if the program runs smoothly
    return 0;
}