#include <cs50.h>
#include <stdio.h>
#include <string.h>

int checksum(long number);

int main(void)
{
    //getting input from user
    int x;
    long card_number;
    string length = (string) card_number;
    do {
     card_number= get_long("Card Number: ");
    }
    while(strlen(length)<13 && strlen(length)>16);

    //int card_type = checksum(x);
    //if (x==true){
      //  if ((card_number/2)==7){
        //}

    //}
}