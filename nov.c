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



 for(int i = 0 ; i < 2 ; i++)
    {
        printf("(");
    }
    for(int i = 0 ; i< num - 2  ;i++ )
    {
        printf("()");
    }
    for(int i = 0 ; i < 2 ; i++)
    {
        printf(")");
    }
    printf("\n");

//increasing single brackets decreasting nested brackets

for ( int  j = 0 ; j < num ; j++)
{
    if(n>2){
    for (int i = 0 ; i < j; i++)
    {
        printf("()");

    }
    }
    for (int m = num - 1; m >0; m--)
    {
        printf("(");
    }
    for (int m = num - 1; m>0; m--)
    {
        printf(")");
    }


}







}




