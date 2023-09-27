#include <cs50.h>
#include <stdio.h>

int checksum(long number);

int main(void)
{
    //getting input from user
    int x;
    long card_number;
    do {
    long card_number= get_float("Card Number: ");
    }
    while(card_number<13 && card_number>16);

    int card_type = checksum(x);
    if (x==true){
        if ((card_number/2)==7){
            if 
        }

    }
}