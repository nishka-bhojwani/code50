#include <cs50.h>
#include <stdio.h>
#include <string.h>

const int BITS_IN_BYTE = 8;
int x ;
void print_bulb(int bit[x]);

int main(void)
{
    // TODO
    int rem[8];
    string word = get_string(" Message: ");
    int length = strlen(word);
    for( int i = 0 ; i < length ; i++)
    {
        for (int j = 0 ; j < 8 ; j++ )
    {
    rem[7-j]= (int)(word[i] % 2) ;
    word[i] = word[i] / 2 ;
    }
    for ( int j = 0 ; j < 8 ; j++)
    {
    void print_bulb(int rem[j]);
    }
    printf("\n");

    }
}

void print_bulb(int bit[x])
{
    if (bit[x] == 0)
    {
        // Dark emoji
        printf("\U000026AB");
    }
    else if (bit[x] == 1)
    {
        // Light emoji
        printf("\U0001F7E1");
    }
}
