#include <cs50.h>
#include <stdio.h>


int size = 8 ;
void make_array(int n, int array[n][n]);//creating an array of a given size

int main(void)
{
    int images[size][size];
    make_array(size, images);
    printf("\n");
    printf("\n");
    for (int i = 0 ; i < 8 ; i++)
    {
        for(int j = 0 ; j<8 ; j++)
        {
            images[i][j]=images[i][8-j];
            printf("%i" , images[i][j]);
        }
    printf("\n");
    }

}

void make_array(int n, int array[n][n])  //creating an array
{
    for ( int m = 0 ; m < n  ; m++)
    {
        for (int l = 0  ; l < m ; l++)
        {
            array[m][l]= (m + l ) ;
            printf("%i " , array[m][l]);
        }
        printf("\n");
    }

}
