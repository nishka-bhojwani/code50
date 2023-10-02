#include <stdio.h>
#include <cs50.h>

const int  N = 3;
float get_average(numbers[]);

int main(void)
{

    int scores[N];
    for(int i = 0 ; i < N ; i++)
    {
        scores[i]=get_int("Score: ",);

    }
    printf("%f \n",get_average(scores));
}

float get_average(numbers[])
{

    int sum = 0;
    for(int i =0 ; i< N ; i++)
    {
        sum = sum + numbers[i];

    }
    return (float) sum / N;

}