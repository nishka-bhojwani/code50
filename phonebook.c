#include <cs50.h>
#include <stdio.h>
#include <string.h>



int main(void)
{
    FILE *file = fopen("phonebook.csv" , "a");
    string name = get_string("Name: ");
    string number = get_string("Phone number: ");
    fprintf(file , " Name: %s , Phone number: %s" , name , number);
    fclose(file);
}
