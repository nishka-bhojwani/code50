#include <stdio.h>
#include <stdlib>

typedef struct node
{
    int number ;
    struct node *next;
}
node;

int main(int argc ,char *argv[]) //takes command line arguments 
{
    node *list = NULL; //declaring a variable called list that acts as an empty block to declare the starting of a list
    for (int i = 1 , i < argc ; i++)
    {
        int number = atoi(argv[i]);
    node *n = malloc(sizeof(node));
    if(n==NULL)
    {
        return 1;
    }
    n->number = number;
    n->next = NULL;

    n->next = list;
    list = n ;
    }
    node *ptr = list;
    while(ptr !=NULL)
    {
        printf("%i \n", ptr-> number);
    }

}
