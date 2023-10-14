#include <cs50.h>
#include <ctype.h> //for using isupper islower and isalpha
#include <stdio.h>
#include <stdlib.h> //for converting string to int
#include <string.h> //for using strlen function

bool only_26(string x);
char sub_upper(string given);


int main(int argc, string argv[])
{
    if (argc != 2)
    {
        printf("Usage: ./substitution key \n");
        return 1;
    }
    if (argc ==2 )
    {
        if(strlen(argv[1]) != 26)
        printf("Key must contain 26 charecters. \n");
        return 1 ;
    }
    if (only_26(argv[1])==false)
    {
        printf("Key must contain only alphabets. \n");
        return 1;
    }
    string text = get_string("plaintext:  \n");
    printf("ciphertext: \n");




}

bool only_26(string x)
{
    int length = strlen(x);
    for (int i = 0; i < length; i++)
   {
    if( !isalpha(x[i]))
    {
        return false;
    }

}
return true;
}

char sub()