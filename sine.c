#include <stdio.h>
#include <math.h>

//sin calculation in C

int main(void)
{
    float sinevalue, value, cosvalue;

    // Get input from user
    printf("Enter a value: ");
    scanf("%f",& value);
    sinevalue = sin(value);
    cosvalue = cos(value);
    
    //Print the sine and cos value
    printf("The sine value of %f is: %f\n", value, sinevalue);
    printf("The cos value of %f is: %f\n", value, cosvalue);
}
