#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int *list = malloc(3*sizeof(int));
    if(list == NULL)
    {
        return 1;
        free(list);
    }
    list[0] = 1;
    list[1] = 2 ;
    list[2] = 3;
    //creating a temprary list to copy the data from list and then make changes to it

    int *tmp = realloc(list, 4*sizeof(int)); //checking the list values to make sure we're not playing with unassigned memory
    if(tmp==NULL)
    {
        free(list);
        return 1;
    }

    list = tmp ;
    tmp[3]= 4;

    for (int i = 0 ; i <=3 ; i++)
    {
        printf("%i \n" ,list[i] );
    }

    free(list);
    return 0;
}


typedef struct node
{
    int number ;
    struct node *next;
}
node;

int main(int argc ,char *argv[]) //takes commandline arguments
{
    node *list = NULL; //declaring a variable called list that acts as an empty block to declare the starting of a list
    for (int i = 1 ; i < argc ; i++) //iterating over the command line arguments
    {
        int num = atoi(argv[i]); //atoi converts string to an integer
        node *n = malloc(sizeof(node));
    if(n==NULL)
    {
        return 1;
    }
    n->number = num; // considering the case of first command line argument , the 1st node number value becomes first CLA
    n->next = NULL; // clearing up the address space for next variable in that particular node

    n->next = list; //new node points to the list (prepend)
    list = n ; // appending the list
    }
    node *ptr = list; //points to first node in the list
    while(ptr !=NULL)
    {
        printf("%i \n", ptr->number);
        ptr = ptr->next; //ptr->next go to the next number and therefore the pointer points at the second node
    }
    ptr = list; //gives a temporary pointer that points at 3
    while(ptr != NULL)
    {
        node *next_value = ptr->next ;
        free(ptr);
        ptr = next_value ;
    }

}
