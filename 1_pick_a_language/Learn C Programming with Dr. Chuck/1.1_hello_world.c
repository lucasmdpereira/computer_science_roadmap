// Exercise 1-1. Run this program on your system. Experiment with leaving out parts of the program, to see what error messages you get.
#include <stdio.h>

void main(){
    printf("hello, world\n");

    // produce an identical output of:

    printf("hello, ");
    printf("world");
    printf("\n");

    // Exercise 1-2. Experiment to find out what happens when printf's argument string contains \x, where x is some character not listed above.
    // \t for tab
    printf("\ttab\ttab\n");
    // \b for backspace
    printf(" \bbackspace \bbackspace\n");
    // \"  for the double quote
    printf("\"double quote\"\n");
    // \\ for the backslash itself
    printf("\\\n");
}

