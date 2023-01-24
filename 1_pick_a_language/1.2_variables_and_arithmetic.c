#include <stdio.h>

/* print Fahrenheit-Celsius table
for f = 0, 20, ..., 300 */

void main(){
    int lower, upper, step;
    float fahr, celsius;
    lower = 0; // lower limit of temperature table
    upper = 300; // upper limit
    step = 20; // step size
    fahr = lower;

    // Exercise 1-3. Modify the temperature conversion program to print a heading above the table.
    printf("fahr celsius\n");
    while(fahr <= upper){
        celsius = (5.0/9.0) * (fahr-32.0);
        printf("%4.0f %6.1f\n", fahr, celsius);
        // The conversion specification %4.0f says that a floating point number is to be printed in a space at least four characters wide, with no digits after the decimal point. 
        // %6.1f describes another number to occupy at least six spaces, with 1 digit after the decimal point, analogous to the F6.1 of Fortran or the F(6,1) of PL/I. 
        // Parts of a specification may be omitted: 
        //     %6f says that the number is to be at least six characters wide; 
        //     %.2f requests two places after the decimal point, but the width is not constrained; 
        //     and %f merely says to print the number as floating point.
        // printf also recognizes %d for decimal integer, %o for octal, %x for hexadecimal, %c for character, %s for character string, and %% for % itself.
        fahr = fahr + step;
    }

    //Exercise 1-4. Write a program to print the corresponding Celsius to Fahrenheit table.
    celsius = lower;
    printf("\ncelsius fahr\n");
    while(celsius <= upper){
        fahr = (((9.0/5.0) * celsius) + 32.0);
        printf("%6.1f %4.0f\n", celsius, fahr);
        celsius = celsius + step;
    }
}

