#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        printf("Usage: ./recover card.raw \n");
        return 1 ;
    }

    FILE *input_file = fopen(argv[1] , "r");
    if(input_file== NULL)
    {
        printf("invalid file \n");
    }

}
