#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

#include "wav.h"

int check_format(WAVHEADER header);
int get_block_size(WAVHEADER header);

int main(int argc, char *argv[])
{
    // Ensure proper usage
    // TODO #1
    if(argc != 3 )
    {
        printf("Usage: ./reverse input output \n");
        return 1;
    }

    // Open input file for reading
    // TODO #2
    char *input_file = argv[1];
    FILE *input_file = fopen(argv[1],"r");
    if(input_file==NULL)
    {
        printf("could not open file");
    }

    // Read header
    // TODO #3
    WAVHEADER header;
    fread(&header , sizeof(WAVHEADER) , 1 , input_file);

    // Use check_format to ensure WAV format
    // TODO #4
    

    // Open output file for writing
    // TODO #5

    // Write header to file
    // TODO #6

    // Use get_block_size to calculate size of block
    // TODO #7

    // Write reversed audio to file
    // TODO #8
}

int check_format(WAVHEADER header)
{
    // TODO #4
    return 0;
}

int get_block_size(WAVHEADER header)
{
    // TODO #7
    return 0;
}
