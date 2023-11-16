#include <stdio.h>
#include <stdlib.h>

 //defining a node
 typedef struct node
  {
    int number ;
    node *next; //defining the address of the next node
 }
 node;

int main(int argc , string argv[])
{
    if(argc != 3)
    {
        printf("Usage : ./list int ....");
    }
 //defining a variable called list which is an empty node
    node *list = NULL;
    node *n = malloc(sizeof(node));
    for (int i = 1 ; i < argc ; i++)
    {
        int num = atoi(argc[i]);
    }


}
