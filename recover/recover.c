#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        printf("Usage: ./recover IMAGE\n");
        return 1 ;
    }

    FILE *input_file = fopen(argv[1] , "r");
    if(input_file== NULL)
    {
        printf("Invalid file \n");
        return 2;
    }

    //declare a variable to store the 

}
