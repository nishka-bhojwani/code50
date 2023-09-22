#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // TODO: Prompt for start size
    int n;
    int p;
     do
     {
        n=get_int("Start size: ");

     }
     while(n<9);

     do
     {
        p=get_int("End size: ");

     }
    while(p<n);
    int y=0;

    while(n<=p)
    {
        n= n+(n/3)-(n/4);
        y=y+1;
        printf("Years: %i \n",y);

    }






}
