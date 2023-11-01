#include <stdio.h>
#include <stdlib.h>

void swap(int a , int b);  //declaring a function called swap


int main(void)
{
    int x = 1;
    int y = 2;
    printf("x:%i, y:%i",x,y);
    swap(x,y);
    printf("x:%i, y:%i",x,y);
}

void swap(int a , int b)
{
    a= malloc(sizeof(int));
    b= malloc(sizeof(int));
    int temp;
    temp = *b;
    *b = *a;
    *a = temp;
}