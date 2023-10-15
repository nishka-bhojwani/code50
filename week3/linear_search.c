#include <cs50.h>
#include <string.h>
#include <stdio.h>

int main(void)
{
    int doors[10];
    doors[10] = (10,20,30,40,50,60,70,80,90,100);
    for( int i = 0; i < 10 ; i++)
    {
        if (doors[i]==50)
        {
            printf("Yayy I found 50, %i \n" , i);
            return 1;
        }
        return 0 ;
    }


}