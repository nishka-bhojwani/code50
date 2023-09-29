#include <stdio.h>
#include <cs50.h>



int main(void)
{
    long num= get_long("Give me a credit card number, please :");
    //printf("%i", (int)(num/1e12));

if ((int) (num/1e12)==4 || (int) (num/1e13)== 4 || (int) (num/1e14)==4 || (int)(num/1e15)==4)
{
  printf("this cc could be a visa \n");
}
else if ((int)(num/1e13)==34 || (int)(num/1e13)==37)
    {
      printf("this could be an american express card \n" );
    }
    else if( (int)(num/1e14)==51 || (int)(num/1e14)==52 || (int)(num/1e14)==53 ||(int)(num/1e14)==54 || (int)(num/1e14)==55)
    {

    printf("This could be a master card");
    }
    else
    {
    printf("INVALID card");

    }

}