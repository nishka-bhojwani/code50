#include <cs50.h>
#include <stdio.h>

int main(void)
{
    char c= get_char("Do you agree with this?");
    if (c=='y',c=='Y')
    {
        printf("Agreed.");
    }
    else if(c=='n',c=='N')
    {
        printf("Not agreed.");
    }
}
