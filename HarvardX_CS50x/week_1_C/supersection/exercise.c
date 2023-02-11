// Create a C program that prompts a user for:
// A name
// An age
// A phone number
// Print the values back to the user as confirmation

#include <stdio.h>
#include <cs50.h>

int main(void){
    string name = get_string("Name: ");
    short age = (short) get_int("Age: ");
    long number = get_long("Phone: ");

    printf("\nName: %s. Age: %i. Number: %li\n", name, age, number);
}