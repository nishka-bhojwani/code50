#include <stdio.h>
#include <string.h>

int n ;

void parenthesis(int num);

int main(void)
{

    printf("n: ");
    scanf("%d", &n);
    parenthesis(n);


    return 0;
}

void parenthesis(int num)
{
    for( int i = 0 ; i < num ; i++)
    {
        printf("()");

    }
    printf("\n");
    for(int i = 0 ; i < num ; i++)
    {
        printf("(");
    }
    for(int i = 0 ; i < num ; i++)
    {
        printf(")");
    }


}




