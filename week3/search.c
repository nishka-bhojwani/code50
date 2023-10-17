#include <cs50.h>
#include <stdio.h>

int main(void)
{   int n ;
    int numbers[n] = {20 , 50 , 10 , 5 , 100 , 15};


    int num= get_int("Number: ");
    for (int i = 0; i < n ; i++)
    {
        if(num==numbers[i])
        {
            printf("Yayyyy found it \n" );
            return 0;
        }
    }
    printf("Not found :( \n" );
    return 1;

}