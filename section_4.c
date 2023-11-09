#include <stdio.h>
#include <stdlib.h>
#include <cs50.h>
#include <stdint.h>

int main(int argc , string argv[])
{
    if(argc!=0)
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

    unit8_t buffer[4];
    fread(buffer , sizeof(uint8_t), 4 , input);
    for (int i= 0 ; i < 4 ; i++)
    {
        printf(ibuffer[i]
    }
}
