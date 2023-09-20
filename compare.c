
#include <cs50.h>
#include <stdio.h>

int main(void){

int a=get_int("Input a number ");
int b=get_int("Input another number");

if (a>b){
    printf("%i>%i ",a,b);

}
else if(a<b){
     printf("%i<%i",a,b);
     }
    else{
        printf("%i=%i",a,b);

    }
    }


