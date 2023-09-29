#include <stdio.h>
#include <cs50.h>

int main(void)
{
    long num= get_long("Give me a credit card number, please :");

  if ((num/1e12)==4 || (num/1e13)== 4 || (num/1e14)==4 || (num/1e15)==4)
    {
        printf("this cc could be a visa \n");
    }
    else if ((num/1e13)==34 || (num/1e13)==37)
    {
        printf("this could be an american express card \n" );
    }
    else if( (num/1e14)==51 || (num/1e14)==52 || (num/1e14)==53 || (num/1e14)==54 || (num/1e14)==55)
    {
        printf("This could be a master card");
    }
    else
    {
        printf("INVALID card");

    }

}