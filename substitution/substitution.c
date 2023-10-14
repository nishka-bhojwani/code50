#include <cs50.h>
#include <ctype.h> //for using isupper islower and isalpha
#include <stdio.h>
#include <stdlib.h> //for converting string to int
#include <string.h> //for using strlen function

bool only_26(string x);
int sub(string given);


int main(int argc, string argv[])

{   int index;
    if (argc != 2)
    {
        printf("Usage: ./substitution key \n");
        return 1;
    }
    else if (argc ==2 )
    {
        if(strlen(argv[1]) != 26)
        {
        printf("Key must contain 26 charecters. \n");
        return 1 ;
        }
         if (only_26(argv[1])==false)
        {
        printf("Key must contain only alphabets. \n");
        return 1;
        }
    }


    string text = get_string("plaintext:  ");
    printf("ciphertext: ");
    for (int i = 0; i < strlen(text); i++)
    {
        if(isupper(text[i]))
        {
            index = sub(text);
            if(isupper(argv[1][index]))
            {
                printf("%c" , argv[1][index]);
                return 1;
            }
            if(islower(argv[1][index]))
            {
                printf("%c" , (char)(argv[1][index] - 32));
                return 1;
            }
        }
        if(islower(text[i]))
        {
            index = sub(text);
            if(islower(argv[1][index]))
            {
                printf("%c" , argv[1][index]);
                return 1;
            }
            if(isupper(argv[1][index]))
            {
                printf("%c" , (char)(argv[1][index] + 32));
                return 1;
            }
        }
        else
        {
            printf("%c" , text[i]);
        }
    }
    printf("\n");
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

int sub(string given)
{
    int c;
    for (int i = 0; i < strlen(given); i++)
    {
        if(isupper(given[i]))
        {
            c = (int)(given[i] - 65);
            return c;
        }
        if(islower(given[i]))
        {
            c = (int)(given[i] - 97);
            return c;
        }
    }
    return 1;

}