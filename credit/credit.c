#include <cs50.h>
#include <stdio.h>

// declaring a function check sum
bool check_sum(long long cc_num);

int main(void)
{ // takes credit card input from user.
    long num = get_long("Give me a card number, please: ");

    // checks if the card satisfies Luhn's Algorithm using the check_sum function
    if (check_sum(num) == true) // the nested if loop checks which type of credit card it is
    {
        if ((int) (num / 1e12) == 4 || (int) (num / 1e13) == 4 || (int) (num / 1e14) == 4 || (int) (num / 1e15) == 4)
        {
            printf("VISA");
        }
        else if ((int) (num / 1e13) == 34 || (int) (num / 1e13) == 37)
        {
            printf("AMERICAN EXPRESS");
        }
        else if ((int) (num / 1e14) == 51 || (int) (num / 1e14) == 52 || (int) (num / 1e14) == 53 || (int) (num / 1e14) == 54 ||
                 (int) (num / 1e14) == 55)
        {

            printf("MASTERCARD");
        }
        else
        {
            printf("INVALID"); // if the card is none of the specified type this prints invald.
        }
    }
    else // if sum is not divisible by 0 then this printf prints INVALID
    {
        printf("INVALID");
    }
    printf("\n");
}

bool check_sum(long long cc_num)
{
    int sum = 0;
    bool next_digit = false;

    while (cc_num > 0)
    {
        int digit = cc_num % 10;
        if (next_digit == 1)
        {
            digit *= 2;
            if (digit > 9)
            {
                digit -= 9;
            }
        }
        sum += digit;
        next_digit = !next_digit;

        cc_num /= 10;
    }
    return ((sum % 10) == 0);
}
