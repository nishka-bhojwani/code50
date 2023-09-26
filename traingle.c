#include <cs50.h>
#include <stdio.h>

float valid_triangle(float side1, float side2 , float side3);

int main(void)
{
    int x = get_int("Side1 : ");
    int y = get_int("Side2 : ");
    int z = get_int("Side 3 : ");

    int triangle= valid_triangle(x,y,z);
    if (triangle==true)
    {
        print("This triangle exists\n");
    }
    if (triangle==false)
    {
        printf("This triangle cannot exist/n");
    }

}
float valid_triangle(x,y,z)
{

    
}

