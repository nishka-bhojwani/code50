#include <cs50.h>
#include <stdio.h>

int main(void)

{
    for( int i = 1 ; i < 6 ; i++)
    {
        for(int m = i+1 ; m < 6 ; m++)
            {
              printf("  ");
            }

        printf("%i \n", i);
        for ( int n = 1 ; n < i ; n++)
        {
            printf(" ");
        }

        if(i!=5)
        {
        printf("%i", i+1);
        }
    }
    printf("\n");

}