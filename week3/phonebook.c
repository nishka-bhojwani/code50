#include <cs50.h>
#include <string.h>
#include <stdio.h>

int main(void)
{
    string names[]= {"Carter" , "David"};
    string numbers[] = {"+1-655-102-324" , "+1-403-564-555"};
    string name= get_string("Name: ");

    for( int i= 0 ; i < 2 ; i++)
    {
        if(strcmp(name,names[i])==0)
        {
            printf("Found number: %s \n", numbers[i]);
            return 0;
        }
    }
    printf("Not found \n");
    return 1;
}