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

    for(int i=1; i<=h ;i++)
    {

        for(int j=i;j<=h-1;j++)
        {
            printf(" ");

        }
        for(int m=1;m<=i; m++)
        {
            printf("#");
        }
         printf(" "" ");
        for(int n=1;n<=i;n++)
        {
            printf("#");
        }
              printf("\n");
     }

    }


