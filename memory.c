#include <stdio.h>

int main(void)
{
    int x ;
    int y;

    *x= 42;

    x=y;
    
    *y=13;

    printf("%p,%p",x,y);



}