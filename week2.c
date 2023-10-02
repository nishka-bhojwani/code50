#include <stdio.h>
#include <cs50.h>

const int  length = 3;
float get_average(int numbers[]);

int main(void)
{

    int scores[length];
    for(int i = 0 ; i < length ; i++)
    {
        scores[i]=get_int("Score: ");

    }
    printf("%f \n",get_average(scores));
}

float get_average(int numbers[])
{

    int sum = 0;
    for(int i =0 ; i< length ; i++)
    {
        sum += numbers[i];

    }
    return (float) sum / length;

}