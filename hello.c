#include <stdio.h>
#include <cs50.h>

int main(void){
    string first=get_string("What's your name? ");
    string second=get_string("What's your age? " );
    printf(" Hello,%s. You're %s? that's awesome. \n",first,second );
}