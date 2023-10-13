#include <cs50.h>
#include <ctype.h> //for using isupper islower and isalpha
#include <stdio.h>
#include <stdlib.h> //for converting string to int
#include <string.h> //for using strlen function

bool only_nums(string x);          // function to check that the key given by the user is a number
char rotate(char letter, int key); // function to rotate the function by the given key

int main(int argc, string argv[])
{
    if (argc != 2 || only_nums(argv[1]) == false) // condition to check that the user inputs only one key as a CLA
    {
        printf("Usage: ./caesar key\n"); // incase user gives more than 1 input tells the user the required input structure
        return 1;
    }
    int num = atoi(argv[1]); // converts string to int and stores it in num

    string text = get_string("plaintext:  "); // get input from user
    printf("ciphertext: ");
    for (int i = 0; i < strlen(text); i++) // iterates through all the charecters in the string given by user
    {
        if (isalpha(text[i])) // checks if alphabet
        {
            if (isupper(text[i])) // checks if uppercase
            {
                char final = rotate(text[i], num);
                printf("%c", final);
            }
            else if (islower(text[i])) // checks if lowercase
            {
                char final2 = rotate(text[i], num);
                printf("%c", final2);
            }
        }
        else
        {
            printf("%c", text[i]); // other charecters printed as is
        }
    }
    printf("\n");
}

bool only_nums(string x)
{
    int length = strlen(x);
    for (int i = 0; i < length; i++)
    {
        if (((int) x[i] < '0') || ((int) x[i] > '9'))
        {
            return false;
        }
    }
    return true;
}

char rotate(char letter, int key)
{

    if (isupper(letter))
    {
        letter = (letter - 65);
        int c = ((letter + key) % 26);
        c = (char) (c + 65);
        return c;
    }
    else if (islower(letter))
    {
        letter = (letter - 97);
        int c = ((letter + key) % 26);
        c = (char) (c + 97);
        return c;
    }
    return 1;
}
