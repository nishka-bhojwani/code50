#include <cs50.h>
#include <stdio.h>
#include <string.h>

int checksum(long number);

int main(void)
{
    //getting input from user
    int x;
    long card_number;
    int rem1;
    int rem2;


     card_number= get_long("Card Number: ");
     rem1= (int) (card_number/1e12);
     rem2= (int) (card_number/1e16);

     

}