#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int h;


    do
    {
        h = get_int("Height: ");

    }
    while ( h < 1 || h > 8);

    for(int i=0; i<h ;i++)
    {
        for(int j=0;j<i-1;j++)
        {
            printf(" ");
        }
        for(int m=1;m<=i; m++)
        {
            printf("#");
        }
            printf("\n");


        }
    }


