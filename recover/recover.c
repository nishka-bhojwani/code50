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

    //declare a variable to store the 512 bytes in a block
    //also a counter that counts the number of images generated
    //file pointer to handle the JPEGS that are found and need to be recovered
    

}
