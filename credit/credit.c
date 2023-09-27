#include <cs50.h>
#include <stdio.h>
#include <string.h>

int checksum(long number );

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

     string digits= (string) card_number;

}


int check_sum(long number)
{
    int sum=0;

    string dig= (string) number;
   int  n= strlen(dig);
    for (int i = n-1; i > 0; i=i-2)
    {
        sum = sum + ((int) dig[i])*2;
        i=i+2;
    }
    return sum;
    

}