#include <cs50.h>
#include <stdio.h>
#include <string.h>

#define MAX_ACCOUNTS 10
void create_account(int account_number , char holder_name[] ,float balance);
void deposit(int account_number, float amount);
void withdraw(int account_number , float amount);
void view_account(int account_number);

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
    create_account(1001, "John Doe", 5000.0);
    create_account(1002, "Jane Smith", 10000.0);

    deposit(1001, 1000.0);
    withdraw(1002, 2000.0);

    view_account(1001);
    view_account(1003);

    return 0;
}


void create_account(int account_number , char holder_name[] ,float initial_balance)

{
    if(account_count < MAX_ACCOUNTS)
    {
        strcpy(accounts[account_count].holder_name, holder_name);
        accounts[account_count].account_number=account_number;
        accounts[account_count].balance=initial_balance;
        account_count++;
        printf(" Account created successfully! \n");
    }
    else
    {
       printf("Max account limit exceded can not create new account \n" );
    }
}

void deposit(int account_number , float deposit)
{
    for (int i = 0 ; i < account_count ; i++)
    {
        if(account_number == accounts[i].account_number)
        {
            accounts[i].balance += deposit;
            printf("Deposited %.2f into account %d. New balance: %.2f\n",deposit , account_number, accounts[i].balance);
            return;
        }
    }
     printf("Account not found. Deposit failed.\n");

}
void withdraw(int account_number, float withdraw_amt) {
    for (int i = 0; i < account_count; i++) {
        if (accounts[i].account_number == account_number)
        {
            if(withdraw_amt <= accounts[i].balance)
            {
                accounts[i].balance -= withdraw_amt ;
               printf("Amount of %f withdrawn from account %i \n",withdraw_amt , accounts[i].account_number);
            }
            else
            {
              printf("Insuffient balance ,cannot withdraw money \n");
            }
            return;
        }
    }
    printf("Account not found \n");

}

void view_account(int account_number) {
    for (int i = 0; i < account_count; i++) {
        if (accounts[i].account_number == account_number) {
            printf("Account Number: %d\n", accounts[i].account_number);
            printf("Holder Name: %s\n", accounts[i].holder_name);
            printf("Balance: %.2f\n", accounts[i].balance);
            return;
        }
    }
    printf("Account not found. Viewing details failed.\n");
}


