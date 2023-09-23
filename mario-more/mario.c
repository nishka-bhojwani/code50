#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int h;
    int i;
    int j;
    
    do
    {
        h = get_int("Height: ");

    }
    while ( h < 1 || h > 8);

    for(i=1;i<=h,i++)
    {
        for(j=1;j<=h;j++)
        {
            printf("(8-j)*'',#*j,2*'',#*j/n");
            j=j+1;
            i=i+1;


        }
    }


}