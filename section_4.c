#include <stdio.h>
#include <stdlib.h>
#include <cs50.h>

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
}
