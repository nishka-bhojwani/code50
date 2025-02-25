#include <cs50.h>
#include <ctype.h> //for using isupper islower and isalpha
#include <stdio.h>
#include <stdlib.h> //for converting string to int
#include <string.h> //for using strlen function

bool only_alpha(string x); //to check that all the charecters are alphabets
int sub(char given);

int main(int argc, string argv[])

{
    int index;
    if (argc != 2)
    {
        printf("Usage: ./substitution key \n");
        return 1;
    }
    else if (argc == 2)
    {
        if (strlen(argv[1]) != 26)
        {
            printf("Key must contain 26 charecters. \n");
            return 1;
        }
        if (only_alpha(argv[1]) == false)
        {
            printf("Key must contain only alphabets. \n");
            return 1;
        }
        for (int i = 0; i < 25; i++)
        {
            for (int j = i + 1; j < 26; j++)
            {
                if (argv[1][i] == argv[1][j])
                {
                    printf("Key contains duplicate letters.\n");
                    return 1;
                }
            }
        }
    }

    string text = get_string("plaintext:  ");
    printf("ciphertext: ");
    for (int i = 0; i < strlen(text); i++) //iterates through every element of the input text
    {
        if (isupper(text[i]))
        {
            index = sub(text[i]);
            if (isupper(argv[1][index]))
            {
                printf("%c", argv[1][index]);
            }
            else if (islower(argv[1][index]))
            {
                printf("%c", (char) (argv[1][index] - 32));
            }
        }
        if (islower(text[i]))
        {
            index = sub(text[i]);
            if (islower(argv[1][index]))
            {
                printf("%c", argv[1][index]);
            }
            else if (isupper(argv[1][index]))
            {
                printf("%c", (char) (argv[1][index] + 32));
            }
        }
        if (!isalpha(text[i]))
        {
            printf("%c", text[i]);
        }
    }
    printf("\n");
}

bool only_alpha(string x)
{
    int length = strlen(x);
    for (int i = 0; i < length; i++)
    {
        if (!isalpha(x[i]))
        {
            return false;
        }
    }
    return true;
}

int sub(char given) //to covert the ints representing the alphabets to the required index of argv[1].
{
    int c = 0;
    if (isupper(given)) //for uppercase charecters
    {
        c = (int) (given - 'A');
    }
    else if (islower(given)) //for lowercase charecters
    {
        c = (int) (given - 'a');
    }
    return c;
}