#include <cs50.h>
#include <stdio.h>
#include <string.h>

char rotate(char letter);
int key;

int main(void)
{

}

char rotate(char letter)
{
    char c1;
    char c2;

    if(isupper(letter))
    {
        letter = (letter/65) ;
        c1 =  ((letter + key ) % 26 )

    }
}
