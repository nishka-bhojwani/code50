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

        printf("%d", i);

        if (i > 1)
        {
            // Print middle spaces
            for (int n = 1; n <= (2*i - 3) ; n++)
            {
                printf(" %i", i);
            }

            printf("%d", i);
        }

        printf("\n");
    }

    return 0;
}
