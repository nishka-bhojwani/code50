#include <stdio.h>
#include <string.h>

int n ;

void parenthesis(int num);
void single_brackets(int n);
void double_brackets(int n );

int main(void)
{

    printf("n: ");
    scanf("%d", &n);
    parenthesis(n);


    return 0;
}

void parenthesis(int num)
{


for (int j = 2 ; j <num ; j++)
{
 for(int i = 0 ; i < j  ; i++)
    {
        printf("(");
    }
    for(int i = 0 ; i< num - j ;i++ )
    {
        printf("()");
    }
    for(int i = 0 ; i < j ; i++)
    {
        printf(")");
    }
    printf("\n");
}


//increasing single brackets decreasting nested brackets

for ( int  j = 0 ; j < num ; j++)
{
    for (int i = 0 ; i < ja; i++)
    {
        printf("()");

    }

    for (int m = num - 1; m >=j; m--)
    {
        printf("(");
    }
    for (int m = num - 1; m>=j; m--)
    {
        printf(")");
    }
    printf("\n");
}
}

void single_brackets(int n)
{
    for (int i = 0 ; i < n ; i++)
    {
        printf("()")
    }
}

void double_brackets(int n)
{
    for (int )
}


