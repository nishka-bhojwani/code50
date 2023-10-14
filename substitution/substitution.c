#include <cs50.h>
#include <ctype.h> //for using isupper islower and isalpha
#include <stdio.h>
#include <stdlib.h> //for converting string to int
#include <string.h> //for using strlen function

bool only_26(string x);
int main(int argc, string argv[])
{
    if (argc != 2 || only_26(argv[1]) == false)
    {
        printf("Usage: ./substitution key \n");
        return 1;
    }

    else if (argc ==2 && only_26(argv[1]) == true)
    {
        if(strlen(argv[1]) != 26)
        printf("Key must contain 26 charecters. \n");
        return 1 ;
    }

}

bool only_26(string x)
{
    int length = strlen(x);
    for (int i = 0; i < length; i++)
   {
    if( !isalpha(x[i]))

}