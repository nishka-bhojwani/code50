#include <cs50.h>
#include <stdio.h>
#include <string.h>

int checksum(long number);

int main(void)
{
    //getting input from user
    int x;
    long card_number;

    do {
     card_number= get_long("Card Number: ");
    }
    while((card_number/(1e12))<=0 || (card_number/(1e17)>0));

    //int card_type = checksum(x);
    //if (x==true){
      //  if ((card_number/2)==7){
        //}

    //}
}