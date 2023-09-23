#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int height;
    do
    {
         height = get_int("Height of pyramid: /n");
    }
    while(height<1,height>8);

}