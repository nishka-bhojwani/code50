#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

typedef uint8_t BYTE;

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
    unsigned char buffer[512];
    int images = 0 ;
    FILE *output_file = NULL ;
    char *file_name = malloc(8*sizeof(char));

    //iterating through 512 bytes of memory in the input file
    

}
