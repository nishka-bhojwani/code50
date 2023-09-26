#include <cs50.h>
#include <stdio.h>

bool valid_triangle(float side1, float side2 , float side3);

int main(void)
{
    float x;
    float y;
    float z;
    do{
         x = get_float("Side1 : ");
    }
    while(x<0);
        do{
         y = get_float("Side2 : ");
        }
         while(y<0);

    do{
        z = get_float("Side 3 : ");
     }
        while(y<0);



    int triangle= valid_triangle(x,y,z);
    if (triangle==true)
    {
        printf("This triangle exists\n");
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

    if (sum1>side3 && sum2>side1 && sum3>side2)
    {
        return true;
    }

    else
    {
        return false;
    }

}

