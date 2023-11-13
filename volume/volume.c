// Modifies the volume of an audio file

#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

// Number of bytes in .wav header
const int HEADER_SIZE = 44;

int main(int argc, char *argv[])
{
    // Check command-line arguments
    if (argc != 4)
    {
        printf("Usage: ./volume input.wav output.wav factor\n");
        return 1;
    }

    // Open files and determine scaling factor
    FILE *input = fopen(argv[1], "r");
    if (input == NULL)
    {
        printf("Could not open file.\n");
        return 1;
    }

    FILE *output = fopen(argv[2], "w");
    if (output == NULL) //checking if the file has data to prevent errors
    {
        printf("Could not open file.\n");
        return 1;
    }

    float factor = atof(argv[3]); // determing that the 3rd user input is the scaling factor

    // TODO: Copy header from input file to output file
    uint8_t HEADER[HEADER_SIZE]; //breaking 44 bits into 8 bit of blocks and storing it as an array(space in memory) so that it can be used later
    fread(HEADER, HEADER_SIZE , 1 , input); //reads 44 bits of memory from input file that we have stored as HEADER
    fwrite(HEADER, HEADER_SIZE , 1 , output);//writes that into the output file



    // TODO: Read samples from input file and write updated data to output file
    int16_t buffer;  //creating a block of 2 bytes of memory in the input file after the header file so that 2 bytes can be copied at a time
    while(fread(&buffer, sizeof(int16_t) , 1 , input)) //using the while loop to stop reading data after the input file ends
    {
        buffer = buffer*factor;
        fwrite(&buffer , sizeof(int16_t) , 1 , output); //writing that data in output file 
    }

    // Close files
    fclose(input);
    fclose(output);
}
