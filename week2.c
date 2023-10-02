#include <stdio.h>
#include <cs50.h>

const int  N = 3;
float get_average(int numbers[]);

int main(void)
{

    int scores [N];
    for(int i = 0 ; i < N ; i++)
    {
        scores[i]=get_int("Score: ");

    }
    printf("%f \n",get_average( N , scores));
}

float get_average(int length ,int numbers[])
{

    int sum = 0;
    for(int i =0 ; i< length ; i++)
    {
        sum += numbers[i];

    }
    return (float) sum / length;

}