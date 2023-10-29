#include <cs50.h>
#include <stdio.h>
#include <string.h>

#define MAX_ACCOUNTS 10
void create_account(int account_number , char holder_name[] ,float balance);
void deposit(int account_number, float amount);
void withdraw(int account_number , float amount);

typedef struct
{
    char holder_name[50];
    int account_number;
    float balance;

}ACCOUNT;

ACCOUNT accounts[MAX_ACCOUNTS];
int account_count = 0 ;

int main(void)
{

}


void create_account(int account_number , char holder_name[] ,float balance)
{
    for( int i = 0 ; i < account_count ; i++)
    {
    if(account_count < MAX_ACCOUNTS)
    {
        accounts[account_count].holder_name=
    }
}

