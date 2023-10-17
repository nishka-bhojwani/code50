#include <cs50.h>
#include <string.h>
#include <stdio.h>

typedef struct
{
    string name;
    string number;
}
person people[2];

int main(void)
{
    people[0].name = "Carter";
    people[1].name = "David";
    people[0].number= "+1-437-548-1000";
    people[1].number = "+1-234-897-1600";
    string name= get_string("Name: ");

    for( int i= 0 ; i < 2 ; i++)
    {
        if(strcmp(name,people[i].name)==0)
        {
            printf("Found number: %s \n", people[i].number);
            return 0;
        }
    }
    printf("Not found \n");
    return 1;
}