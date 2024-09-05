#include <stdio.h>



int main()
{
    // Welcome statement to the user.
    printf("Welcome to the Area and Circumference of a Circle Program\n"); 
    
    // Declaring the variables for pi,diameter, and radius except for diameter which is just declared.
    float pi = 3.14;
    float diameter;
    float radius = diameter/2;


    // Initialzing the diameter by asking for user input.
    printf("What is the diameter of the circle: ");
    scanf("%f",&diameter);
    
   
    // Printign the diameter,radius,circumference, and area of the circle to the screen for the user.
    printf("\nThe diameter of the circle: %f",diameter);
    printf("\nThe radius of the circle: %f",radius);
    printf("\nThe Circumference of the circle: %f",2* radius * pi);
    printf("\nThe Area of the circle: %f",(pi*(radius * radius)));
    
    // Returns 0 if the program runs smoothly.
    return 0;
}