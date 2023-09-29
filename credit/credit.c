#include <cs50.h>
#include <stdio.h>
#include <string.h>

int check_sum(long number );

int main(void)
{
    //getting input from user
    int x;
    long card_number;
    int i;

    do
    {card_number= get_long("Card Number: ");

     }
     while(((int) (card_number/1e12)) <=0 || ((int) (card_number/1e16)>0)) ;
     int card_sum=check_sum(card_number);
     printf("%i", card_sum);



}
int check_sum(long number)
{
    





}