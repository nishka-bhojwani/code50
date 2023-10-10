#include <cs50.h>
#include <stdio.h>
#include <string.h>

bool only_nums(sring x);

int main(int argc, string argv[])
{
    if(argc == 2 )
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
    if( ((int) x < 0 ) || ((int) x > 9 ))
    {
        return true;
    }
    else
    {
        return false;
    }
}