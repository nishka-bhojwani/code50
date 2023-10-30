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


void create_account(int account_number , char holder_name[] ,float initial_balance)

{
    if(account_count < MAX_ACCOUNTS)
    {
        strcpy(accounts[account_count].holder_name, holder_name);
        accounts[accounts_count].account_number=account_number;
        accounts[accounts_count].balance=initial_balance;
        account++;
        printf(" Account created successfully! \n");
    }
    else
    {
        printf("Max account limit exceded can not create new account \n" );
    }
}

void deposit(int account_number , float deposit)
{
    for (int i = 0 ; i < account_number < i++)
    {
        if(account_number == accounts[i].account_number)
        {
            accounts[i].balance += deposit;
             printf("Deposited %.2f into account %d. New balance: %.2f\n", amount, account_number, accounts[i].balance);
            return;
        }
    }
     printf("Account not found. Deposit failed.\n");

}
void withdraw(int account_number, float withdraw_amt) {
    for (int i = 0; i < account_count; i++) {
        if (accounts[i].account_number == account_number)
        {
            if(withdraw_amt >= accounts[i].balance)
            {
                accounts[i].balance -= withdraw_amt ;
                printf("Amount of %f withdrawn from account %i \n",withdrawn_amt , accounts[i].account_number)
            }
            else
            {
                printf("Insuffient balance ,cannot withdraw money \n")
            }
            return;
        }
    }
    printf("Account not found \n");

}





