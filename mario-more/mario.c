#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int h;
    // getting the height from the user and storing it in a variable
    // prompts user again incase of an input greater than 8 or smaller than 1
    do
    {
        h = get_int("Height: ");
    }
    while (h < 1 || h > 8);

    // using nested for loops for specifying the required output line by line
    for (int i = 1; i <= h; i++)
    {
        for (int j = i; j <= h - 1; j++)
        {
            printf(" "); // prints the required spaces (h-1) in this case
        }
        for (int m = 1; m <= i; m++)
        {
            printf("#"); // prints number of #'s required that is equal to the roq number i.e. i
        }
        printf(" "
               " ");                 // prints the gap in the middle
        for (int n = 1; n <= i; n++) // this for loop prints the hash triangle on the right hand side
        {
            printf("#");
        }
        printf("\n");
    }
}
