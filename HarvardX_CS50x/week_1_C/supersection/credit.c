#include <stdio.h>
#include <string.h>

int main(void) {

    char card_number[] = "4222222222222";

    int s1, s2 = 0;
    int my_switch = 0; 
    for (int i = strlen(card_number)-1; i >= 0; i--){
        if (my_switch == 0){
            my_switch = 1;
            s2 += card_number[i]-'0'; // Convert from ASCII to number
        } else {
            my_switch = 0;
            int number = (card_number[i]-'0') * 2;
            if (number > 9){
                int l = number % 10;
                int f = number / 10;
                
                s1 += l + f;
            } else {
                s1 += number;
            }
        }
    }

    int total = s1 + s2;
    if (total % 10 != 0){
        printf("INVALID\n");
    } else {
        if (card_number[0] == '3'){
            printf("AMEX\n");
            return 0;
        }
        if (card_number[0] == '4'){
            printf("VISA\n");
            return 0;
        }
        if (card_number[0] == '5'){
            printf("MASTER\n");
            return 0;
        }
        printf("VALID\n");
        return 0;
    }
}