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


     card_number= get_long("Card Number: ");
     int rem1= (int) (card_number/1e13);
     printf("%i" , rem1 \n);



    //int card_type = checksum(x);
    //if (x==true){
      //  if ((card_number/2)==7){
        //}

    //}
}