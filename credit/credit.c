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
    int n;
    string dig= (string) number;

    for (int i = 1; n == strlen(); i < n; i+2)
    {
        sum = sum + ((int) dig[i])*2;
        i=i+2;

    }
}