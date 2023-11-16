#include <stdio.h>
#include <stdlib.h>

 //defining a node
typedef struct node
{
    int number ;
    struct node *next; //defining the address of the next node
}
 node;

int main(int argc , char *argv[])
{
 //defining a variable called list which is an empty node
    node *list = NULL;
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

        n->next = list; //new node points to the current begining of the list
        list = n;
    node *ptr= list; //ptr points at first node in the list
    while(ptr != NULL)
    {
        printf("%i \n" , ptr->number);
        ptr = ptr->next ; //follow the arrow and grab the next field

    }

    ptr = list;


}
}
