#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int num = 72;
    int rem[8];
    for (int i = 0 ; i < 8 ; i++ )
    {
    rem[7-i]= (int)(num % 2) ;
    num = num / 2 ;
    printf("%i" , rem[7-i]);
    }

}