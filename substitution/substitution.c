#include <cs50.h>
#include <ctype.h> //for using isupper islower and isalpha
#include <stdio.h>
#include <stdlib.h> //for converting string to int
#include <string.h> //for using strlen function

bool only_26(string x);
int main(int argc, string argv[])
{
    if (argc != 2 || only_26(argv[1]) == false) // condition to check that the user inputs only one key as a CLA
    {
        printf("Usage: ./caesar key\n"); // incase user gives more than 1 input tells the user the required input structure
        return 1;
    }
}

bool only_26(string x)
{
    length = strlen(x);
    for (i = 0; i < length; i++)
   {
        if (length == 26 && (( x[i] >= 'a' && x[i] <= 'z') || ( x[i] >= 'A' && x[i] <= 'Z')) )
    {
        return true;
    }
   }
    return false;
}