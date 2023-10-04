#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int array[100];
    int num=0;

    for(int i=0 ; i<100 ; i++)
    {
        array[i]=num;
        num=num + 1;
        //printf("%i ",num);

    }

    printf("%i \n" , array[50]);

}