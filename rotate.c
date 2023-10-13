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

    if(isupper(letter))
    {
        letter = (letter/65) ;
        int c1 =  ((letter + key ) % 26 )
        char c1 = (char) c1+65
        return c1;
            }
    else if(islower(letter))
    {
        letter = (letter/65) ;
        int c1 =  ((letter + key ) % 26 )
        char c1 = (char) c1+65
        return c1
    }
}
