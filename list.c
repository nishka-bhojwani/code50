#include <stdio.h>
#include <stdlib.h>

 //defining a node
 typedef struct node
  {
    int number ;
    node *next; //defining the address of the next node
 }
 node;

int main(int argc , char *argv[])
{
    if(argc != 3)
    {
        printf("Usage : ./list int ....");
    }
 //defining a variable called list which is an empty node
    node *list = NULL;
    node *n = malloc(sizeof(node));
    if(n==NULL)
    {
        return 1;
    }
    for (int i = 1 ; i < argc ; i++)
    {
        int num = atoi(argv[i]); //atoi = aski to integer
         node *n = malloc(sizeof(node));
          if(n==NULL)
    {
        return 1;
    }
     n->number = num;
        n->next = NULL;
    }



}
