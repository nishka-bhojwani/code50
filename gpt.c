#include <cs50.h>
#include <stdio.h>

int main(void)
{
    for (int i = 1; i <= 5; i++)
    {
        // Print leading spaces
        for (int m = 1; m <= 5 - i; m++)
        {
            printf("  ");
        }

        if (i==1)
        {
            printf("%i",i);

        }

        if (i > 1)
        {
            for (int n = 1 ;  n <= (2*i-1); n++)
            {
                printf("%i ", i);

            }

        }


        printf("\n");
    }

    return 0;
}
