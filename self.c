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

for (int i = 0; i < size; i++)
{
    for (int j = size - 1; j >= 0; j--)
        {
            printf("%i ", images[i][j]);
        }
        printf("\n");
    }

}

void make_array(int n, int array[n][n])  //creating an array
{
    for ( int m = 0 ; m < n  ; m++)
    {
        for (int l = 0  ; l < n ; l++)
        {
            array[m][l]= (m * n + l + 1) ;
            printf("%i " , array[m][l]);
        }
        printf("\n");
    }

}
