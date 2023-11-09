#include <stdio.h>
#include <stdlib.h>
#include <cs50.h>
#include <stdint.h>

int main(int argc , string argv[])
{
    if(argc!=2)
    {
        printf("Usage: ./section_4 input_file \n");
        return 1;
    }
    //open file
    string file_name = argv[1];
    FILE *input = fopen(file_name , "r");

    //check if file exists
    if (input == NULL)
    {
        printf("file unavailable\n");
        return 1 ;
    }

    uint8_t buffer[4];
    fread(buffer , sizeof(uint8_t), 4 , input);
    for (int i= 0 ; i < 4 ; i++)
    {
        if(buffer[0] == 37 && buffer[1] == 80 && buffer[2] == 68 && buffer[3]==70)
        {
            printf("given file is a pdf\n");
            return 0 ;
        }
        else
        {
            printf("given file is not a pdf\n");
            return 0 ;
        }
    }
}
