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

#define LIST_SIZE 2;

void unload(node *list);
void visualize(node *list);

int main(void)
{
    node *list = NULL;
    node *n = malloc(sizeof(node));
    
}
