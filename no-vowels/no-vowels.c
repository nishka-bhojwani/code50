// Write a function to replace vowels with numbers
// Get practice with strings
// Get practice with command line
// Get practice with switch

#include <cs50.h>
#include <stdio.h>

string replace(string word);

int main(int argc, string argv[])
{
    if(argc != 2)
    {
        printf("Usage: ./no-vowels word");
        return 0 ;
    }
    replace(argv[1]);
    printf("%s",argv[1]);
}

string replace(string word)
{
    for(int i = 0 ; i < strlen(word); i++)
    {
        switch(word[i])
        {
        case 'a':
            return '6';
        case 'e':
            return '3';
        case 'i':
            return '1';
        case 'o':
            return '0';
    }
    }
    return word;

}
