#include <cs50.h>
#include <stdio.h>

bool valid_triangle(float side1, float side2 , float side3);

int main(void)
{
    float x = get_float("Side1 : ");
    float y = get_float("Side2 : ");
    float z = get_float("Side 3 : ");

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

bool valid_triangle(x,y,z)
{
    float sum1=x+y;
    float sum2=y+z;
    float sum3=x+z;

    if (sum1>z , sum2>x, sum3>y){
        bool traingle = true ;
        return traingle;
    }
    else{
        bool triagle = false;
        return traingle;

    }

}

