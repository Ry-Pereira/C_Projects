#include <stdio.h>



int main()
{
    printf("Welcome to the Saffir Scale Program ");
    
    float wind_spd;
    char category;
    
    printf("Wind Speed: ");
    scanf("%f",&wind_spd);
    
    if (wind_spd >= 70){
        category = 5;
        printf("You are dealing with a category %s",category);
    }
    else if (wind_spd >= 70){
        category = 4;
        printf("You are dealing with a category %s",category);
    }
    else if (wind_spd >= 70){
        category = 3;
        printf("You are dealing with a category %s",category);
    }
    else if (wind_spd >= 70){
        category = 2;
        printf("You are dealing with a category %s",category);
    }
    else if (wind_spd >= 70){
        category = "tropical storm";
        printf("You are dealing with a category %s",category);
    }
    else if (wind_spd >= 70){
        category = "tropical depression";
        printf("You are dealing with a category %s",category)
    }
    else (wind_spd >= 70){
        printf("Type in a appropariate number);
    }
    return 0;
}