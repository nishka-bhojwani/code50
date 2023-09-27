#include <cs50.h>
#include <stdio.h>
#include <string.h>

bool check_sum(long number );

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
        bool check= check_sum(card_number);
        if(check==true)
        {
            printf("VALID");
        }
        else
        {
            printf("INVALID");
        }
}


bool check_sum(long number)
{
    int sum1=0;
    int sum2=0;

    string dig= (string) number;
   int  n= strlen(dig);
    for (int i = n-1; i > 0; i=i-2)
    {
        sum1 =sum1+ ((int) dig[i])*2;
        i=i+2;
    }

    for(int i= 0 ; i<n ; i=i+2 )
    {
        sum2=sum2 + ((int) dig[i]);
        i=i+2;
    }

    int sum= sum1+sum2;
    return sum;

    if((sum/10)>0)
    {
        return true;
    }
    else
    {
        return false;
    }



}