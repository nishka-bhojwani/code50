#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        printf("Usage: ./recover card.raw \n");
    }

    FILE* new_file = fopen(card.raw , 'r');
    if(card.raw == NULL)
    {
        printf("invalid file \n");
    }

}
