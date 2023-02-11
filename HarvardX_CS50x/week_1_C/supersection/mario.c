// Let’s recreate those pyramids in C, albeit in text, using hashes (#) for bricks, a la the below. Each hash is a bit taller than it is wide, so the pyramids themselves will also be taller than they are wide.

//    #  #
//   ##  ##
//  ###  ###
// ####  ####

// The program we’ll write will be called mario. And let’s allow the user to decide just how tall the pyramids should be by first prompting them for a positive integer between, say, 1 and 8, inclusive.

#include <cs50.h>
#include <stdio.h>
#define GAP 2
#define MAX_BLOCKS 9

int main(void) 
{
    int height;
    do{
        height = get_int("Height: ");
    } while (height < 1 || height >= MAX_BLOCKS);

    for (int j = 0; j < height; j++){
        for (int i = 0; i < ((height * 2) + GAP); i++){
            if  (
                    (i < height) && i >= (height - (j + 1))
                    ||
                    (i > height) && i <= (height + (j + 1))
                ){
                printf("#");
            }else{
                printf(" ");
            }
        }
        printf("\n");
    }
}