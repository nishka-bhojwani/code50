#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <stdlib.h>

typedef struct node
{
    string phrase;
    struct node *next;
}
node

#define LIST_SIZE 2

//void unload(node *list);


int main(void)
{
    node *list = NULL;

    for(int i = 0 ; i< LIST_SIZE ; i++)
    {
        string phrase = get_string("Phrase: ");
        node *n = malloc(sizeof(node));
        n->phrase = phrase;
        n->next = list;
        list = n;

    }
    printf(list)
}
