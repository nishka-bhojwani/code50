#include <stdio.h>
#include <cs50.h>

int main(void)
{
    long number= get_long("Card number: ");
    int  rem1=  (number%100);
    printf("%i \n", rem1);

}