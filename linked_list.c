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
    for (int i = 1 , i < argc ; i++) //iterating over the command line arguments
    {
        int num = atoi(argv[i]); //stoi converts string to an integer
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

}
