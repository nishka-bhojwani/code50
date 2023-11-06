#include <cs50.h>
#include <stdio.h>


int size = 8 ;
int make_array(int n); //creating an array of a given size

int main(void)
{

    int images =make_array(size);
    for (int i = 0 ; i < 8 ; i++)
    {
        for(int j = 0 ; j<8 ; j++)
        {
            images[i][j]=images[i][j-1];
            printf("%i" , images[i][j]);
        }

    }
    printf("\n")
}

int make_array(int n);  //creating an array
{
    for ( int m = 0 ; m < n  ; m++)
    {
        for (int l = 0  ; l < m ; l++)
        {
            array[m][l]= (m+1)*3 ;
        }
    }
    return int array[m][l];
}
