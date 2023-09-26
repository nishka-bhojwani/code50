#include <cs50.h>
#include <stdio.h>

bool valid_triangle(float side1, float side2 , float side3);

int main(void)
{
    do{
    float x = get_float("Side1 : ");
    float y = get_float("Side2 : ");
    float z = get_float("Side 3 : ");
    }
    while(x<0 && y<0 && z<0);

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

bool valid_triangle(float side1, float side2 , float side3)
{
    float sum1=side1+side2;
    float sum2=side2+side3;
    float sum3=side3+side1;

    if (sum1>side3, sum2>side1, sum3>side2)
    {
        return true;
    }

    else
    {
        return false;
    }

}

