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

        for(int j = 0 ; j < i ; j++)
        {
            printf("%i ", i);

        }
    printf("\n");
    }
}