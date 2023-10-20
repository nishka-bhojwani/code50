#include <cs50.h>
#include <stdio.h>

int main(void)
{
    for (int i = 0 ; i < 4 ; i++)
    {
        printf("#");
    }
    printf("\n");

    for (int i = 0 ; i < 4 ; i++)
    {
        for( int j = i+1 ; j < 4; j++)
        {
        printf("#");
        }
        printf("\n");
    }
}