#include <cs50.h>
#include <stdio.h>

int main(void)

{
    for( int i = 1 ; i < 6 ; i++)
    {
        for(int j = 5 ; j < 1 ; j--)
        {
            printf(' ');
        }
        for(int j = 0 ; j < i+1 ; j++)
        {
            printf("%i \n", i);
        }
        printf("\n");
    }
}