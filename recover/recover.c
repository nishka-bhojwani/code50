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
    int image_count = 0 ;
    FILE *output_file = NULL ;
    char *file_name = malloc(8*sizeof(char));

    //iterating through 512 bytes of memory in the input file
    while(fread(buffer , sizeof(char),512,input_file ))
{
    if( buffer[0]== 0xff && buffer[1]== 0xd8 && buffer[2]==0xff &&(buffer[3] & 0xf0 == 0xe0 ))
    {
        sprintf(file_name , "%03i.jpg" , image_count);

        //open a file to write into
        output_file = fopen(output_file , "w");
        image_count++;
    }

    if (output_file !=NULL)
    {
        fwrite(buffer , sizeof(char), 512 ,output_file )
    }

}
    free(file_name);
    fclose(input_file);
    fclose(output_file);
    return 0;
}
