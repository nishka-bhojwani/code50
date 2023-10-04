#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int n = get_int("Size of arrray: ");
    int array[n];
    int m=1;
    for (int i=0 ; i<n ; i++)
    {
        printf("%i \n" , m);
        m= m*2;
    }


}
