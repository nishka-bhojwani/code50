#include <stdio.h>
#include <stdlib.h>

void swap(int *a , int *b);  //declaring a function called swap


int main(void)
{
    int x = 1;
    int y = 2;
    printf("x:%i, y:%i \n",x,y);
    swap(&x,&y);
    printf("x:%i, y:%i \n",x,y);
}

void swap(int *a , int *b)
{
    int temp = *b;
    *b = *a;
    *a = temp;
}