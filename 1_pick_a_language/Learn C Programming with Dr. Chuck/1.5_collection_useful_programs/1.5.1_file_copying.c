#include<stdio.h>

// File copying
void main() /* copy input to output; while version */
{
    int c;
    while ((c = getchar()) != EOF){
        putchar(c);
    }
}

