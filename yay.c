#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int num = 72;
    int rem[8];
    for (int i = 0 ; i < 7 ; i++ )
    {
    rem [8-i]= num % 2 ;
    num/= 2 ;
    printf("%i" , rem);
    }

}