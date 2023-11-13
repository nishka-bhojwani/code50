#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

typedef uint8_t BYTE; //defining BYTE as 8 unsigned int bits

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
    int image_count = 0 ;
    FILE *output_file = NULL ;
    char *file_name = malloc(8*sizeof(char));

    //iterating through 512 bytes of memory in the input file
    while(fread(buffer , sizeof(char),512,input_file ))
{
    if( buffer[0]== 0xff && buffer[1]== 0xd8 && buffer[2]==0xff &&(buffer[3] & 0xf0) == 0xe0 )
    {
        sprintf(file_name , "%03i.jpg" , image_count); //creating a jpg file with the prefex 001.jpg for image_Count = 1

        //opening that jpg file to write into it
        output_file = fopen(file_name, "w");
        image_count++; //incrementing the image count
    }

    if (output_file !=NULL) //if output file is opem
    {
        fwrite(buffer , sizeof(char), 512 ,output_file ); //writing the before copied data from the input file (buffer)
    }

}

    //freeing the used up space becuase of malloc and opening files
    free(file_name);
    fclose(input_file);
    fclose(output_file);
    return 0; //successfully executed code
}



