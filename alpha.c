#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{

    string x = get_string("Input a string : " );
    int length = strlen(x);

    for(int i =0 ; i < length ; i++)
    {
        if( x[i] >= 'a' && x[i] <= 'z')
        {
            if (x[i] > x[i+1])
            {
                printf(" No \n");
                return 0;
                }
            else
            {
                printf("Yes \n");
                return 0;
            }
        }
        else
        {
            printf("Give an input with lowercase charecters please \n");
            return 0;

        }

    }
    printf("\n");


}