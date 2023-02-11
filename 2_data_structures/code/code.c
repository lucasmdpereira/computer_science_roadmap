#include <stdio.h>

void main(){
    int myArray[] = {1, 2 ,3};

    printf("%p\n", &myArray);
    printf("%p\n", &myArray[0]); // decimal 140737488346012
    printf("%p\n", &myArray[1]); // decimal 140737488346016
    printf("%p\n", &myArray[2]); // decimal 140737488346020
    printf("\n");

    char myArrayChar[] = {'a','b','c'};

    printf("%p\n", &myArrayChar);
    printf("%p\n", &myArrayChar[0]); // decimal 140737488346021
    printf("%p\n", &myArrayChar[1]); // decimal 140737488346022
    printf("%p\n", &myArrayChar[2]); // decimal 140737488346023
    printf("\n");
    
    char myStringChar[] = {'string1', 'string2', 'string3'};

    printf("%p\n", &myStringChar);
    printf("%p\n", &myStringChar[0]); // decimal 140737488346021
    printf("%p\n", &myStringChar[1]); // decimal 140737488346022
    printf("%p\n", &myStringChar[2]); // decimal 140737488346023
    printf("\n");

}

