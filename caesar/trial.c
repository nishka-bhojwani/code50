#include <cs50.h>
#include <stdio.h>
#include <string.h>

bool only_nums(string x);

int main(int argc, string argv[])
{
    if(argc == 2 && only_nums(argv[1])==true )
    {
        return 0;
    }
    else
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }


}

bool only_nums(string x)
{
    int length = strlen(x);
    for(int i = 0 ; i < length ; i++ )
    {
    if( ((int) x[i] < '0' ) || ((int) x[i] > '9' ))
    {
        return false;
    }
    }
    return true;


}