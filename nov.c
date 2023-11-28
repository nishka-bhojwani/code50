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

    //1st set of parenthesis
    for (int n = 0 ; for( int i = 0 ; i < num ; i++)
    {
        printf("()");

    }
    //2nd set of parenthesis
    for(int i = 0 ; i < num ; i++)
    {
        printf("(");
    }
    for(int i = 0 ; i < num ; i++)
    {
        printf(")");
    }

 //3rd set of combinations
 for(int i = 0 ; i < num -2 ; i++)
    {
        printf("(");
    }
    for(int i = 0 ; i< num - 1 ;i++ )
    {
        printf("()");
    }
    for(int i = 0 ; i < num -2 ; i++)
    {
        printf(")");
    }

    //4th set
    for( int i = 0 ; i < num-2; i++)
    {
        printf("()");
    }
    for(int i = 0 ; i < num -1 ; i++)
    {
        printf()
    }




}




