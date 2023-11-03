#include <stdio.h>
#include <stdlib.h>
#include <cs50.h>
#include <string.h>


int main(void)
{
    char *s = get_string ("s: \n");
    char *t = malloc(strlen(s)+1);
    for (int i = 0, int n = strlen(s)+1  ; i < n ; i++)
    {
        s[i]=t[i];
    }
    t[0]=toupper(t[0]);

    printf("%s" , s);
    printf("%s" , t);

}